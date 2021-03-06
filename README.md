# Displays
## Purpose
This repository is designated for libraries built for display devices, such as the Adafruit OLED FeatherWing and the TFT 3.5" FeatherWing.
These libraries are based off of libraries written by Adafruit Industries. The purpose that these libraries serve is to simplify the number of include statements and variable declarations. That way, someone can go straight into coding the tasks they want to perform instead of focusing on the setup.

## What's Provided
Each folder contains a .h and .cpp file. These make up a library. In addition to these files, there is a folder that holds example code that uses these libraries. These are working examples that were tested before being uploaded to this repository.

## Programming Language IDE?
These libraries were made using the Arduino 1.8.8 IDE, meaning they are written in a variant C++ format. The example files provided in each library are also written in this IDE, so to run them, you must use Arduino.

## Download and Install
When you are trying to download and install any of these libraries, it is important that you follow these steps.
1. Download this repository to your desktop or computer, either by clicking clone or download.
2. If you downloaded a zip file, extract it to wherever you are holding your Arduino libraries.
3. This repository contains multiple libraries. In order for the Arduino **libraries** folder to access them properly, you must take out each library from the repository and place it in **libraries** individually. So in other words, your **libraries** should look something like this:
  - GnG_AF_OledFeather
  - GnGminiTFTjoystickFeather
  - GnGminiTFTjoystickFeather
