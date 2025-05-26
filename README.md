# ESP32 Wireless Data Logger

This project sets up an ESP32 to wirelessly send analog sensor data over Wi-Fi. A Python script on a PC connects to the ESP32 and logs the data.

## Features

✅ Wi-Fi server on ESP32  
✅ Analog sensor reading (pin 34)  
✅ Python client to receive and log data  

## How to Use

1. Flash `esp32_wifi_sender.ino` to your ESP32  
2. Connect ESP32 to your Wi-Fi network  
3. Update `data_receiver.py` with the ESP32 IP address  
4. Run the Python script to receive data

## Requirements

- ESP32 DevKit  
- Arduino IDE  
- Python 3 + requests (`pip install requests`)
