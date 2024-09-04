# Wireless-Wrist-Pulse-Recording-Platform

This project demonstrates a PCB-level prototype (Technology Readiness Level 6 - TRL-6) of a wireless wrist pulse recording platform using ESP32 and MAX30102 sensors. The project captures pulse readings corresponding to Vata, Pitta, and Kapha pulses in Ayurveda.

## Table of Contents
- [Introduction](#introduction)
- [Hardware Components](#hardware-components)
- [Software Requirements](#software-requirements)
- [Circuit Diagram](#circuit-diagram)
- [Setup and Installation](#setup-and-installation)
- [How to Use](#how-to-use)
- [Output Waveforms](#output-waveforms)
- [PCB Design and Fabrication](#pcb-design-and-fabrication)
- [References](#references)

## Introduction
This project aims to measure pulse readings using MAX30102 sensors and ESP32. The readings are categorized as Vata, Pitta, and Kapha pulses based on Ayurvedic principles. The final output is visualized on a Graphical User Interface (GUI) created using the Processing software.

## Hardware Components
- **ESP32**: A versatile microcontroller that combines Wi-Fi and Bluetooth capabilities.
- **MAX30102 Sensors**: Pulse oximetry and heart-rate monitor biosensors.
- **PCA9548A Multiplexer IC**: Used to connect multiple I2C devices with the same address.
- **PCB**: Custom-designed PCB for stable and reliable connections.

## Software Requirements
- **Arduino IDE**: For programming the ESP32.
- **Processing Software**: To create the GUI for visualizing pulse waveforms.
- **EASYEDA**: For PCB design and simulation.

## Circuit Diagram
The circuit consists of three MAX30102 sensors connected to the ESP32 via the PCA9548A multiplexer IC. The ESP32 handles data acquisition and communication with the Processing software for real-time visualization.

## Setup and Installation
1. **Arduino IDE Setup**:
   - Install the required libraries: `Wire.h` and `MAX30105.h`.
   - Upload the Arduino code to the ESP32.
2. **Processing Software Setup**:
   - Install the ControlP5 library for GUI elements.
   - Run the Processing sketch to visualize the data from the sensors.

## How to Use
1. Power on the ESP32 and connect it to your computer via USB.
2. Open the Arduino IDE and monitor the Serial Plotter for initial readings.
3. Launch the Processing software and run the GUI sketch.
4. Use the GUI buttons to start/stop data acquisition and save the sensor data.

## Output Waveforms
The waveforms corresponding to Vata, Pitta, and Kapha pulses are displayed in real-time on the Processing GUI. The waveforms can be saved as text files for further analysis.

## PCB Design and Fabrication
The PCB design was created using EASYEDA and fabricated locally. The final prototype includes connectors for easy assembly and disassembly.

## References
- [ESP32 Documentation](https://en.wikipedia.org/wiki/ESP32)
- [MAX30102 Datasheet](https://www.analog.com/media/en/technical-documentation/data-sheets/MAX30102.pdf)
- [PCA9548A Datasheet](https://www.ti.com/lit/ds/symlink/pca9548a.pdf)
- [Processing Software](https://processing.org/)
