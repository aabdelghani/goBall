#!/bin/bash

# Log file path
LOGFILE="$HOME/.fullscreen_toggle_log.txt"

# Redirect stdout and stderr to a log file
exec > >(tee -a "$LOGFILE") 2>&1

# Flag to check if fullscreen has been toggled
fullscreen_toggled=0

# Variable to store the process ID of unclutter
CURSOR_PID=""

# Function to hide the cursor
hide_cursor() {
    unclutter -idle 0 -root &
    CURSOR_PID=$!
}

# Function to show the cursor
show_cursor() {
    if [ ! -z "$CURSOR_PID" ]; then
        kill $CURSOR_PID
        CURSOR_PID=""
    fi
}

# Function to set custom display mode
set_display_mode() {
    WAYLAND_DISPLAY="wayland-0" wlr-randr --output HDMI-A-1 --custom-mode 2560x720@60Hz
}

# Main loop
while true; do
    set_display_mode  # Set the custom display mode
    # Check if the application is running
    if pgrep -f "./SquareLine_Project" > /dev/null; then
        echo "[$(date)] Application running, checking for window..."
        WID=$(xdotool search --onlyvisible --name "TFT Simulator" 2>/dev/null)
        
        # Check if the window is found and fullscreen has not yet been toggled
        if [ ! -z "$WID" ] && [ "$fullscreen_toggled" -eq 0 ]; then
            echo "[$(date)] Window found, activating and sending ALT+F11..."
            xdotool windowactivate $WID
            xdotool key alt+F11
            fullscreen_toggled=1  # Set the fullscreen toggled flag
            hide_cursor  # Hide the cursor
        elif [ -z "$WID" ]; then
            echo "[$(date)] Window not found."
        fi
    else
        # Application is not running, reset the fullscreen toggle and show cursor
        echo "[$(date)] Application not running. Resetting fullscreen toggle..."
        fullscreen_toggled=0
        show_cursor  # Show the cursor
        sleep 4  # Wait a bit longer when the application is not running
    fi
    sleep 4  # Regular sleep interval for the loop
done
