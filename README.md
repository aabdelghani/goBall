# Golf Chip Scoring Game

Welcome to the repository for the Golf Chip Scoring Game. This project is designed to allow players to chip golf balls into a target, and it automatically calculates and displays scores for each player using a Raspberry Pi 4 and a custom display.

## Prerequisites

Before you begin, ensure you have the following hardware and software ready
- Windows machine with
	- [SquareLine Studio 1.4 ](https://squareline.io/downloads#lastRelease).
	- [Visual Studio Community 2022](https://visualstudio.microsoft.com/vs/community/).
 		- From the Visual studio Installer you can pick the following 
			1. Python Development 
			2. Desktop development with C+++
   			3. Linux and embedded development with c++
      			4. from Indiviual component you can pick the following
         			a. Embedded and IoT Tools
            			b. C++ Cmake tools for linux
            			c. IntelliCode
            			d. Remote File Explorer for Linux 	    
- Raspberry Pi 4.
- 9.3inch 1600x600 LCD screen ([Waveshare](https://www.waveshare.com/wiki/9.3inch_1600x600_LCD)).

## Setting Up Your Development Environment

### On Windows

1. **Install ARM GNU Toolchain:**
   - Download the ARM GNU Toolchain from [ARM developer website](https://developer.arm.com/downloads/-/arm-gnu-toolchain-downloads).
   - Direct link to download: [arm-gnu-toolchain-13.2.rel1-mingw-w64-i686-arm-none-eabi.exe](https://developer.arm.com/-/media/Files/downloads/gnu/13.2.rel1/binrel/arm-gnu-toolchain-13.2.rel1-mingw-w64-i686-arm-none-eabi.exe?rev=07af46c1f7574a77969b0f764a1255f0&hash=E5598DC9AB1C892D26C25B6158FFA65C).
   - Install the downloaded executable.

2. **Install Additional GCC ARM Toolchain:**
   - Download the GCC ARM Toolchain named gcc-arm-10.3-2021.07-mingw-w64-i686-aarch64-none-linux-gnu from [this link](https://developer.arm.com/downloads/-/gnu-a).
   - Extract the tar.xz file to your preferred directory.

3. **Add Toolchains to Environment Variables:**
   - Search for ‘Environment Variables’ in Windows Search and select “Edit the system environment variables”.
   - In the System Properties window, click on the "Environment Variables" button.
   - Under System Variables, find and select 'Path', then click on 'Edit'.
   - Click 'New' and add the path to the folder where you installed the ARM GNU Toolchain.
   - Add another 'New' entry and include the path to the folder where you extracted the GCC ARM Toolchain.
   - Click 'OK' to close all dialogs.

### On Raspberry Pi

1. **Prepare Raspberry Pi OS:**
   - Download the Raspberry Pi Imager from [Raspberry Pi OS website](https://www.raspberrypi.com/software/).
   - Install and open the Raspberry Pi Imager.
   - Download the Raspberry Pi OS image directly from [here](https://downloads.raspberrypi.com/raspios_oldstable_arm64/images/raspios_oldstable_arm64-2024-03-12/2024-03-12-raspios-bullseye-arm64.img.xz). Ensure the image is compatible with Raspberry Pi 4.
   - Click on 'CHOOSE OS' and select ‘Use custom’ to specify the OS image.
   - Select the downloaded image and write it to your SD card.
   - Before writing the image, click on the gear icon to access the advanced settings:
     - Set the hostname of your Raspberry Pi.
     - Enable SSH and select "Use password authentication".
     - Configure your WiFi by entering the network name (SSID) and password.
   - Additionally, enable VNC for remote desktop access:
     - In the Raspberry Pi Imager’s advanced settings, enable VNC.
     - Ensure your Raspberry Pi is connected to the same network as your Windows machine.

	## Accessing Raspberry Pi via VNC from a Windows Machine
	
	1. **Install VNC Viewer on Windows:**
	   - Download and install VNC Viewer from [RealVNC's website](https://www.realvnc.com/en/connect/download/viewer/).
	   
	2. **Connect to Your Raspberry Pi:**
	   - Open VNC Viewer on your Windows machine.
	   - Enter the IP address or hostname of your Raspberry Pi and press 'Enter'.
	   - When prompted, enter the username and password you configured for your Raspberry Pi.
	   - You should now be connected and able to interact with the Raspberry Pi desktop environment remotely.
	
	2. **Set Up the Display:**
	   - Follow the hardware connection guides on the [Waveshare wiki](https://www.waveshare.com/wiki/9.3inch_1600x600_LCD) to connect your 9.3inch LCD to the Raspberry Pi.
	   - Ensure all connections are secure and the display is configured to work with the Pi correctly.

## Building and Running the User Interface

1. **Exporting from Square Studio:**
   - After designing your screens in Square Studio, export the project to the template folder.
   - Export the user interface to the Square Studio output folder.

2. **Building the UI with Visual Studio:**
   - Open Visual Studio 2022 and select 'Open Folder'.
   - Navigate to the Square Studio output folder.
   - From the top menu, choose 'Build All'.
   - Once the build completes without errors, in the File Explorer panel, right-click on the project and select 'Open Folder in File Explorer'.
   - Navigate to the 'out' folder, then copy the contents of 'x64-Debug' to a flash drive.

## Running the UI on Raspberry Pi

1. **Exporting from Square Studio:**
   - After designing your screens in Square Studio, export the project to the template folder.
   - Export the user interface to the Square Studio output folder.

2. **Building the UI with Visual Studio:**
   - Open Visual Studio 2022 and select 'Open Folder'.
   - Navigate to the Square Studio output folder.
   - From the top menu, choose 'Build All'.
   - Once the build completes without errors, in the File Explorer panel, right-click on the project and select 'Open Folder in File Explorer'.
   - Navigate to the 'out' folder, then copy the contents of 'x64-Debug' to a flash drive.

3. **Running the UI on Raspberry Pi:**
   - Connect the flash drive to the Raspberry Pi.
   - Copy the 'x64-Debug' folder to the desktop of the Pi.
   - Open a terminal on the Pi and write the following commands:
     ```
     cd Desktop/x64-Debug
     chmod +x Squa<tab key for autocomplete>  # It will complete to SquareLine_Project
     ./Squa<tab key for autocomplete>  # Hit tab again then enter
     ```
   - To run the application in full screen, press `ALT + F11` on a keyboard connected to the Pi.

### Consider Using a Desktop Autostart Method
Using the autostart configuration of your desktop environment can be a better alternative for GUI applications:


1. **Create a desktop entry:**
   - For the LXDE environment on Raspbian, you can create an autostart file in the `~/.config/autostart/` directory.
     ```bash
     sudo mkdir -p /home/pi/.config/autostart
     sudo nano /home/pi/.config/autostart/squareline.desktop
     ```
   - Add the following content:
     ```ini
     [Desktop Entry]
     Type=Application
     Name=SquareLine Project
     Exec=/home/q/Desktop/x64-Debug/SquareLine_Project
     ```
   - Make sure the file path and permissions are correctly set for this to work.

### Setting Up Auto-Start for a Script with Logging

To have your script start automatically when you log into your desktop environment and redirect its output to a log file for monitoring, you'll need to create a `.desktop` file in the autostart directory and set up logging within the script. Here’s how to do it:

#### Step 1: Prepare the Script

- **Add logging to your script:** Modify your script to redirect both stdout (standard output) and stderr (standard error) to a log file. Here's an example of how you can do it:

  ```bash
  #!/bin/bash

  # Log file path
  LOGFILE="$HOME/.fullscreen_toggle_log.txt"

  exec > >(tee -a "$LOGFILE") 2>&1

  # Flag to check if fullscreen has been toggled
  fullscreen_toggled=0

  while true; do
      if pgrep -f "./SquareLine_Project" > /dev/null; then
          echo "[$(date)] Application running, checking for window..."
          WID=$(xdotool search --onlyvisible --name "TFT Simulator" 2>/dev/null)
          if [ ! -z "$WID" ] && [ "$fullscreen_toggled" -eq 0 ]; then
              echo "[$(date)] Window found, activating and sending ALT+F11..."
              xdotool windowactivate $WID
              xdotool key alt+F11
              fullscreen_toggled=1
          elif [ -z "$WID" ]; then
              echo "[$(date)] Window not found."
          fi
      else
          echo "[$(date)] Application not running. Resetting fullscreen toggle..."
          fullscreen_toggled=0
          sleep 4
      fi
      sleep 4
  done
  ```

- **Ensure the script is executable:**
  ```bash
  chmod +x /path/to/your/script.sh
  ```

#### Step 2: Create the `.desktop` File in the Autostart Directory

- **Navigate to the autostart directory:**
  ```bash
  cd ~/.config/autostart/
  ```

- **Create a new `.desktop` file:**
  ```bash
  nano fullscreen_toggle.desktop
  ```

- **Add the following content to the `.desktop` file:**
  ```ini
  [Desktop Entry]
  Type=Application
  Name=Fullscreen Toggle
  Exec=/path/to/your/script.sh
  X-GNOME-Autostart-enabled=true
  ```

- **Save and close the editor.**

#### Step 3: Test the Setup

- **Reboot your computer or log out and then back in to test if the script starts automatically and check the log file to ensure it's capturing the output:**
  ```bash
  cat ~/.fullscreen_toggle_log.txt
  ```

This setup will make sure your script runs every time you start your session and keeps a log of its operations, which can be extremely helpful for debugging and monitoring the script’s behavior. Make sure the paths are correctly specified in both the script and the `.desktop` file.


2. **Reboot and Test:**
   - After making these changes, reboot your Raspberry Pi:
     ```bash
     sudo reboot
     ```
   - Check if the UI appears after the system has restarted. These steps should cover common scenarios where a GUI application does not display when started from `rc.local`. If it still doesn't show up, consider checking the logs (`/var/log/syslog` or Xorg logs) for any error messages related to GUI startup.

## Contributing

All copyrights reserved to Nicholas Gums 

