# Golf Chip Scoring Game

Welcome to the repository for the Golf Chip Scoring Game. This project is designed to allow players to chip golf balls into a target, and it automatically calculates and displays scores for each player using a Raspberry Pi 4 and a custom display.

## Prerequisites

Before you begin, ensure you have the following hardware and software ready:

- Windows machine with Visual Studio 2022 Community installed.
- Raspberry Pi 4.
- 9.3inch 1600x600 LCD screen ([Waveshare](https://www.waveshare.com/wiki/9.3inch_1600x600_LCD)).

## Setting Up Your Development Environment

### On Windows

1. **Install ARM GNU Toolchain:**
   - Download the ARM GNU Toolchain from [ARM developer website](https://developer.arm.com/downloads/-/arm-gnu-toolchain-downloads).
   - Direct link to download: [arm-gnu-toolchain-13.2.rel1-mingw-w64-i686-arm-none-eabi.exe](https://developer.arm.com/-/media/Files/downloads/gnu/13.2.rel1/binrel/arm-gnu-toolchain-13.2.rel1-mingw-w64-i686-arm-none-eabi.exe?rev=07af46c1f7574a77969b0f764a1255f0&hash=E5598DC9AB1C892D26C25B6158FFA65C) (Note: This link may change, always check for the latest version on the ARM developer website).
   - Install the downloaded executable.

2. **Add Toolchain to Environment Variables:**
   - Search for ‘Environment Variables’ in Windows Search and select “Edit the system environment variables”.
   - In the System Properties window, click on the "Environment Variables" button.
   - Under System Variables, find and select 'Path', then click on 'Edit'.
   - Click 'New' and add the path to the folder where you installed the ARM GNU Toolchain.
   - Click 'OK' to close all dialogs.

### On Raspberry Pi

1. **Prepare Raspberry Pi OS:**
   - Download the Raspberry Pi Imager from [Raspberry Pi OS website](https://www.raspberrypi.com/software/).
   - Install and open the Raspberry Pi Imager.
   - Click on 'CHOOSE OS' and select ‘Use custom’ to specify the OS image.
   - Download the Raspberry Pi OS (Legacy, 64-bit) from [here](https://www.raspberrypi.com/software/operating-systems/). Ensure the image is compatible with Raspberry Pi 4.
   - Select the downloaded image and write it to your SD card.

2. **Set Up the Display:**
   - Follow the hardware connection guides on the [Waveshare wiki](https://www.waveshare.com/wiki/9.3inch_1600x600_LCD) to connect your 9.3inch LCD to the Raspberry Pi.
   - Ensure all connections are secure and the display is configured to work with the Pi correctly.

## Building and Running the Game

Provide steps to compile and run the game on both the development machine and the Raspberry Pi.

## Contributing

Contributions are welcome. Please read `CONTRIBUTING.md` for details on our code of conduct, and the process for submitting pull requests to us.

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details.
