import requests
import time

esp_ip = 'http://192.168.x.x'  # Replace with ESP32 IP

while True:
    try:
        response = requests.get(esp_ip)
        if response.ok:
            print("Sensor Value:", response.text)
        else:
            print("Failed to get data")
    except Exception as e:
        print("Error:", e)
    time.sleep(1)
