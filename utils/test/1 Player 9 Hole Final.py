#!/usr/bin/env python3

import RPi.GPIO as GPIO
import time

# GPIO setup
GPIO.setmode(GPIO.BCM)

# Define sensor pins
sensor_pins = [19, 26, 20, 21]
num_players = 1
max_holes = 9
sensors_per_turn = 2

# Set up each sensor pin as input with pull-down resistor
for pin in sensor_pins:
    GPIO.setup(pin, GPIO.IN, pull_up_down=GPIO.PUD_DOWN)

# Initialize player data
players = [{"score": 0, "current_hole": 1, "detection_count": 0} for _ in range(num_players)]
last_activation_times = {pin: 100 for pin in sensor_pins}  # Track last activation times for each sensor
DEBOUNCE_TIME = 3  # Time to prevent multiple sensor readings

current_player_index = 0

def sensor_callback(channel):
    global players
    global last_activation_times
    global current_player_index

    current_time = time.time()
    
    # Debugging: Print which channel was triggered
    #print(f"Channel {channel} triggered. Detection count: {players[current_player_index]['detection_count']}")

    # Check for valid detection and debounce
    if current_time - last_activation_times[channel] > DEBOUNCE_TIME:
        last_activation_times[channel] = current_time
        player = players[current_player_index]
        
        # Only proceed if the current player has not reached the sensor limit for this turn
        if player["detection_count"] < sensors_per_turn:
            if channel == sensor_pins[0]:
                player["score"] += 3
            elif channel == sensor_pins[1]:
                player["score"] += 4
            elif channel == sensor_pins[2]:
                player["score"] += 5
            elif channel == sensor_pins[3]:
                player["score"] += 0
            
            player["detection_count"] += 1

            print(f"Player {current_player_index + 1} - {player['current_hole']} - {player['detection_count']} - Score: {player['score']}")

            # Check if the player has completed their turn
            if player["detection_count"] == sensors_per_turn:
                player["current_hole"] += 1
                player["detection_count"] = 0  # Reset detection count for the next turn
                current_player_index = (current_player_index + 1) % num_players  # Move to the next player

                # Check if all players have finished 9 holes
                if all(player["current_hole"] > max_holes for player in players):
                    print("All players have completed the game.")
                    GPIO.cleanup(sensor_pins)
                    exit(0)  # End the program

# Add event detection for each sensor pin
for pin in sensor_pins:
    GPIO.add_event_detect(pin, GPIO.FALLING, callback=sensor_callback, bouncetime=3500)

print("Waiting for sensor inputs...")

try:
    while True:
        time.sleep(1)
except KeyboardInterrupt:
    print("Exiting Program...")
finally:
    GPIO.cleanup(sensor_pins)  # Clean up all sensor pins
