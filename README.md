# home-automation-with-Bluetooth-

COMPANY : CODTECH IT SOLUTIONS

NAME: GODUGULA GOUTHAM

INTER ID : CT08DF1436

DOMAIN : EMBEDDED SYSTEMS

DURATION: 8 WEEKS

MENTOR : NEELA SANTOSH


This project is a Bluetooth-based Home Automation System that allows users to control household appliances like lights, TV, air conditioner (AC), fan, and lamp using an Android smartphone. The mobile application is developed using MIT App Inventor, which offers a visual programming interface through blocks. The system communicates with the devices wirelessly through Bluetooth, enabling ON/OFF functionality for each connected device.The home automation system consists of two main components:
1.Mobile Application Interface
2.Bluetooth Communication Logic
The application is designed with a user-friendly graphical interface featuring buttons for each appliance labeled ON and OFF. These buttons send specific characters over Bluetooth to a microcontroller (like Arduino or any Bluetooth-compatible embedded system) which interprets these characters and controls the corresponding relays to switch devices on or off.The application has a visually appealing layout with a red and black background for a modern look. At the top, there's a label prompting users to turn on Bluetooth, followed by a CONNECT button. Below that is the main control area divided into rows for each appliance (Light, TV, AC, Fan, Lamp), each with two buttons labeled "ON" and "OFF".Each ON/OFF button is linked to an action block in the MIT App Inventor's block editor, where it sends a unique character via Bluetooth when clicked. These characters serve as commands for the connected controller to perform specific tasks.The application logic is built using visual blocks that define how each component behaves. Here's how it works:

Bluetooth Connection:

When the ListPicker is clicked (ListPicker1.BeforePicking), it fetches and displays all available Bluetooth devices.

After a user selects a device (ListPicker1.AfterPicking), it attempts to establish a connection with the selected device.

A label is updated to show whether the device is “Connected” or “Disconnected”.

Control Buttons:

Each ON and OFF button is associated with a Button.Click event.

Before sending a command, the app checks whether the Bluetooth connection is active using BluetoothClient1.IsConnected.

If connected, the app sends a specific character using BluetoothClient1.SendText.

The characters sent for each button are as follows:

Light ON: "A", OFF: "1"

TV ON: "B", OFF: "2"

AC ON: "C", OFF: "3"

Fan ON: "D", OFF: "4"

Lamp ON: "E", OFF: "5"

These characters can be decoded by a microcontroller to trigger relays and control appliances.

Working Principle:
The user enables Bluetooth on their smartphone and launches the application.

They click "CONNECT" to pair with a Bluetooth-enabled microcontroller.

Once connected, the user can turn each appliance ON or OFF using the respective buttons.

Each button sends a unique character via Bluetooth.

The microcontroller reads the received character and turns the appropriate appliance ON or OFF.

Conclusion:
This project is an excellent example of integrating mobile applications with embedded systems for real-world automation. It provides a low-cost, scalable, and user-friendly solution to automate home appliances. It enhances convenience, improves energy efficiency, and demonstrates how Bluetooth and MIT App Inventor can be used effectively for wireless control systems


<img width="456" height="763" alt="Image" src="https://github.com/user-attachments/assets/8e788075-fb4b-4a54-b313-0ebbef9af6f0" />

<img width="1920" height="1080" alt="Image" src="https://github.com/user-attachments/assets/71ac6c93-d045-4eaa-8b7d-df9531bc0064" />


