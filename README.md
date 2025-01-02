<<<<<<< HEAD
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
   - Download the GCC ARM Toolchain named gcc-arm-10.3-2021.07-mingw-w64-i686-aarch64-none-linux-gnu.tar.xz from [this page](https://developer.arm.com/downloads/-/gnu-a)., or [this link](https://developer.arm.com/-/media/Files/downloads/gnu-a/10.3-2021.07/binrel/gcc-arm-10.3-2021.07-mingw-w64-i686-aarch64-none-linux-gnu.tar.xz?rev=06b6c36e428c48fda4b6d907f17308be&hash=5C6B156A536294706E14D40D8110CA03A086D63C) to download it directly. 
   - Extract the tar.xz file to your preferred directory.

3. **Add Toolchains to Environment Variables:**
   - Search for ‘Environment Variables’ in Windows Search and select “Edit the system environment variables”.
   - In the System Properties window, click on the "Environment Variables" button.
   - Under System Variables, find and select 'Path', then click on 'Edit'.
   - Click 'New' and add the path to the folder where you installed the ARM GNU Toolchain.
   - Add another 'New' entry and include the path for example in my case it was "C:\gcc-arm-10.3-2021.07-mingw-w64-i686-aarch64-none-linux-gnu\bin" and "C:\gcc-arm-10.3-2021.07-mingw-w64-i686-aarch64-none-linux-gnu\aarch64-none-linux-gnu\bin"
    to the folder where you extracted the GCC ARM Toolchain. also add  C:\gcc-arm-10.3-2021.07-mingw-w64-i686-aarch64-none-linux-gnu\aarch64-none-linux-gnu\bin to user variables path as well
   - Click 'OK' to close all dialogs.

### On Raspberry Pi

1. **Prepare Raspberry Pi OS:**
   - Download the Raspberry Pi Imager from [Raspberry Pi OS website](https://www.raspberrypi.com/software/).
   - Install and open the Raspberry Pi Imager.
   - Download the Raspberry Pi OS image directly from [here](https://downloads.raspberrypi.com/raspios_oldstable_arm64/images/raspios_oldstable_arm64-2024-03-12/2024-03-12-raspios-bullseye-arm64.img.xz). Ensure the image is compatible with Raspberry Pi 4.
   - Click on 'CHOOSE OS' and select ‘Use custom’ at the very bottom to specify the OS image from whererver you downloadede the OS image file.
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
## RaspberryPi 5 -> changing the resolution 
WAYLAND_DISPLAY="wayland-0" wlr-randr --output HDMI-A-1 --custom-mode 2560x720@60Hz
=======
# Visual Studio Code and CMake and Eclipse-CDT IDE project for SquareLine Studio and LVGL - with 64bit Raspberry Pi as compile-target


This project can be used to cross-build Raspberry Pi C/C++ UI code exported from SquareLine Studio.


## Prerequisites

General note: Please avoid folder-names and filenames containing non-ASCII (special/accented/foreign) characters for the installed tools and your exported projects. Some build-tools and terminals/OS-es don't handle those characters well or interpret them differently, which can cause issues during the build-process.


### Compiler (gcc) and generator (make):

#### For CMAke/VScode get and install the essential build-tools (binutils,compiler,linker,make,etc.) on your host-PC if you don't have them yet:

- On Windows [MinGW](https://www.mingw-w64.org/) contains them, the POSIX+SEH+UCRT-build variant at their [GitHub repository](https://github.com/niXman/mingw-builds-binaries/releases) works fine on Windows 10:
  - Download for example: [x86_64-13.2.0-release-posix-seh-ucrt-rt_v11-rev0.7z](https://github.com/niXman/mingw-builds-binaries/releases/download/13.2.0-rt_v11-rev0/x86_64-13.2.0-release-posix-seh-ucrt-rt_v11-rev0.7z)
  - Extract/copy the compressed 7z file's included 'mingw64' folder to C:\  (Can be other folder but we continue with this here.)
  - You need to add the 'C:\mingw64\bin' folder to your PATH environment variable (Unfortunately there's no up-to-date mingw64 installer that sets it for us.)
  (On Windows 10 right-click on This PC, go to Advanced System Settings / Environment Variables, select 'Path' and add "C:\mingw64\bin" to an empty line.)
  - (You can check if the setting works by typing 'mingw32-make' on command line.)
- On Linux type in the Terminal: `sudo apt-get install gcc g++ gdb build-essential`
- On MacOS install latest Xcode

#### For Eclipse CDT you need to get and install the GNU 'Make' build-tool on your host-PC if you don't have it yet (Eclipse will use it in the background):

- On Windows [Make tool Windows support webpage](https://gnuwin32.sourceforge.net/packages/make.htm) directs to an installer:
  - Download the installer: [Make Tool Windows Installer](https://sourceforge.net/projects/gnuwin32/files/make/3.81/make-3.81.exe)
  - You need to add the 'C:\Program Files (x86)\GnuWin32\bin' folder to your PATH environment variable (Unfortunately there's no Make installer that sets it for us.)
  (On Windows 10 right-click on This PC, go to Advanced System Settings / Environment Variables, select 'Path' and add the folder-path mentioned above to an empty line.)
  - (You can check if the setting works by typing 'make' on command line.)
- On Linux type in the Terminal: `sudo apt-get install make`
- On MacOS install latest Xcode


### To compile for Raspberry you'll need the cross-compiler targeting 64bit ARM architecture ('aarch64')

Download one 'GNU/Linux-target' variant for your host-OS from ARM's official homepage:

- If your RPI has the new Raspberry Pi OS 12 (Bookworm having glibc-2.36) you can go on by downloading e.g. gcc-arm-12.3 (having glibc-2.34). (But the other option below, gcc-arm-10.2, works as well.)
  - Find it at webpage [Current ARM GNU Toolchain downloads](https://developer.arm.com/downloads/-/arm-gnu-toolchain-downloads)
  - For Windows choose the exe installer which sets PATH environment variable for you (be sure to check that option when asked!): [arm-gnu-toolchain-12.3.rel1-mingw-w64-i686-aarch64-none-linux-gnu.exe](https://developer.arm.com/-/media/Files/downloads/gnu/12.3.rel1/binrel/arm-gnu-toolchain-12.3.rel1-mingw-w64-i686-aarch64-none-linux-gnu.exe)
  - For Linux: [arm-gnu-toolchain-12.3.rel1-x86_64-aarch64-none-linux-gnu.tar.xz](https://developer.arm.com/-/media/Files/downloads/gnu/12.3.rel1/binrel/arm-gnu-toolchain-12.3.rel1-x86_64-aarch64-none-linux-gnu.tar.xz)
  (After extracting the package to your preferred place you need to add the contained 'bin' folder to your PATH in ~/.profile so you can run aarch64-none-linux-gnu-gcc and the others from any folder.)
  - For OSX it seems there's only source-code distribution

- If the RPI has the older Raspberry Pi OS 11 (Bullseye having glibc-2.31) you need to download gcc-arm-10.2 (having glibc-2.31). (Executables built with this work in the new Raspberry Pi OS 12 as well.)
  - Find it at webpage [Discontinued ARM A-profile CPU toolchain downloads](https://developer.arm.com/downloads/-/gnu-a)
  - For Windows (MinGW): [gcc-arm-10.2-2020.11-mingw-w64-i686-aarch64-none-linux-gnu.tar.xz](https://developer.arm.com/-/media/Files/downloads/gnu-a/10.2-2020.11/binrel/gcc-arm-10.2-2020.11-mingw-w64-i686-aarch64-none-linux-gnu.tar.xz)
  - For Linux: [gcc-arm-10.2-2020.11-x86_64-aarch64-none-linux-gnu.tar.xz](https://developer.arm.com/-/media/Files/downloads/gnu-a/10.2-2020.11/binrel/gcc-arm-10.2-2020.11-x86_64-aarch64-none-linux-gnu.tar.xz)
  - After extracting these packages to your preferred place you need to add the contained 'bin' folder to your PATH so you can run `aarch64-none-linux-gnu-gcc` and the others from any folder.
  (Alternatively you can install by package manager on Linux, for example in LMDE 5 the 10.2 version of gcc-arm could be installed by: `sudo apt-get install gcc-aarch64-linux-gnu` but filenames lack the 'none' part and CMakeLists.txt might need to be changed.)
  (For that `aarch64-linux-gnu-gcc` there's a `CMakeLists-repository-GCC.txt` included which is used by `build-repository-GCC.sh` build-script.)

- LVGL is set to use SDL2 as a backend (beside GlibC). Original SDL2 development-library is compiled and included in this OBP file to save you from the hassles of getting and compiling it yourself
  - (The produced Raspberry Pi executable is dynamically linked, so it needs libSDL2 runtime-library to run. Raspberry Pi OS should have SDL2 runtime-library by default but you can install it by `sudo apt-get install libsdl2-2.0-0`)


### Builder:

#### For CMake/VScode building you need to get CMake tool to generate the build-chain (makefiles) for the host PC's platform:

- For Windows go to [CMake download page](https://cmake.org/download/) and select the [CMake MSI-installer binary distribution](https://github.com/Kitware/CMake/releases/download/v3.28.0-rc2/cmake-3.28.0-rc2-windows-x86_64.msi)
  (When asked by the installer, select the option that will take care of setting the PATH variable for the cmake executable.)
- For Linux you just need to get and install CMake from the repository, for example `sudo apt-get install cmake`

- If you want GUI-based build you can get and install [Visual Studio Code](https://code.visualstudio.com/download)
  - After running Visual Studio Code, you need to download 2 extensions: 'C/C++ Extension Pack' and 'CMake Tools'

#### For building with Eclipse you should have Eclipse CDT installed on your machine:
- Download it from [Eclipse Download Page](https://www.eclipse.org/downloads/)
- When asked about variants, choose Eclipse for C/C++ Developers from the list (it's usually abbreviated as CDT)
- Wait for the installation to finish, it might take a while (and seem to stall falsely complaining about slow download, but ignore it and wait patiently.)



## Usage - configuring and building the project


You have probably selected the Raspberry Pi board already and created a project with it in SquareLine Studio.
In SquareLine Studio click 'Create Template Project' and select the folder to save it to.


### If you chose CMake and command-line build is your preferred way:

#### Navigate to the exported project-folder and you'll see two batch-files (they take care of handling 'build' folder):
- On Windows you can run `build.bat` to build the project for you
- On Linux you can run `build.sh`  (You might need to set its execution-privilege by `chmod 755 build.sh` if it changed in the unzipped exported project-template.)
  (If you have the aarch64 GCC installed from linux repository, `build-repository-GCC.sh` should work instead.)

#### You can also do the cmake steps manually:
- First go to the 'build' folder and to create the build/make-files type:
  - On Windows: `cmake -G "MinGW Makefiles" ..`
  - On Linux: `cmake ..` or `cmake -G "Unix Makefiles" ..`  (or if you have and want Ninja-build, `cmake -G "Ninja" ..`)
- When make-files are ready, you can finally build the project by:
  - On Windows: `mingw32-make`
  - On Linux: `make`  (or `ninja` if you selected this one in the previous step)


### If you want to build in VScode (CMake-based build):
- Just open the project in it by 'Open Folder' (in 'File' menu) and select the exported project-template's folder.
  - If asked, allow it to download and install the CMake extension.
  - To continue you might need to press OK that you trust the source (probably asked because of included SDL binaries)
- Open the `main.c` file, and if asked allow it to download and install the C/C++ extension.
- Select the build toolkit on the bottom toolbar. (For example `GCC 10.2.1 aarch64-linux-gnu-gcc` on Linux/MinGW)
  - (You can choose 'Unspecified' and let the toolchain given by CMake settings be used, that works too.)
- Configure the CMake project with the `CMake: ...` button on the bottom toolbar. (Select preferred release type)
- Build the project with the `Build` button on the bottom toolbar.


### If you want to build in Eclipse:

#### Without CMake being involved:
- Import the project: File / Import ... / General / Existing Projects into Workspace
- Select the project-template folder exported by Squareline Studio and click 'Finish'.
- Open the `main.c` file.
- Pressing the hammer (build) button will build the project with make.

#### Or if you want to build in Eclipse-IDE with makefile generated by CMake:
- While Eclipse project settings aren't exported into the template, CMake has the ability to create Eclipse project-files (tested on Linux):
  - In the project-folder (not in the 'build' folder) type `cmake -G "Eclipse CDT4 - Unix Makefiles" .`
  - The created .settings folder and .cproject and .project files will allow the opening of the project-folder from Eclipse
    - (We don't distribute the Eclipse project files by default because they contain absolute paths which are better generated on-the-fly.)
  - In Eclipse go to File / Import / Existing Projects into Workspace, select project-folder ('root directory') and click finish
  - Pressing the hammer (build) button will build the project with make (on windows you might need to rename mingw32-make to make or create a link to it called 'make')


### To test/run:
- You can copy the generated executable file to the Raspberry by pendrive but setting up an SSH is better:
  - Transfer the generated executable file to your Raspberry PI, e.g.: scp <executable> raspberrypi:~
- Run the executable on the Raspberry PI ( from terminal / midnight-commander / file-browser or 'run' dialog )
  - (You may also test the built binary beforehand with a QEMU emulated Raspberry Pi on the host machine.)
>>>>>>> 38176c8 (Initial Commit of the project)

