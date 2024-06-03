# Arduino LCD 16x2 Display

## Description

This project demonstrates how to interface a 16x2 LCD display with an Arduino to show messages and perform basic text operations such as scrolling and counting. The LCD is connected to the Arduino, and messages are displayed and manipulated on the screen.

## Components Needed

1. **Arduino UNO**
2. **16x2 LCD Display**
3. **Jumper Wires**
4. **Breadboard**

## Diagram

*I will update the block diagram with a logo or watermark ASAP. Please leave it for now.*

## Instructions

### Connecting the Components

1. **Input Sensor to Controller:**
   - Connect the LCD pins to the Arduino as follows:
     - RS to pin 12
     - EN to pin 11
     - D4 to pin 2
     - D5 to pin 3
     - D6 to pin 4
     - D7 to pin 5

### Power the Arduino

- Connect the Arduino to your computer using a USB cable.

### Upload the Code and Observe the Data

1. **Load the Program:**
   - Open the Arduino IDE on your computer.
   - Write or paste the provided program into the IDE.
   - Select the correct board and port in the Arduino IDE under the Tools menu.
   - Upload the program to the Arduino.

2. **Monitor the Output:**
   - After uploading the program, the LCD will display "Circuit Digest!" followed by a scrolling message and a counting sequence from 0 to 9.

### Project Operation

- **Initialization:**
  - The Arduino initializes the LCD and sets it up with 16 columns and 2 rows.
  - A message is displayed, and then it scrolls to the right.

- **Counting:**
  - The LCD displays a counting sequence from 0 to 9 with a one-second delay between each number.

- **Scrolling Message:**
  - The `scrollMessageRight` function scrolls the message "Circuit Digest!" to the right.

## Applications

1. **Information Display:** Used in projects where displaying information is essential.
2. **User Interface:** Incorporated into devices to provide feedback or instructions to the user.
3. **Educational Projects:** Ideal for learning about interfacing displays with microcontrollers.

## Observe the Data

To observe the LCD functionality, upload the sketch to the Arduino. The LCD will show the initial message, scroll it to the right, and then display a counting sequence.

## Support

For any issues or further assistance, please contact us:

- 🌐 [Projects Learner](https://projectslearner.com)
- 📧 Email: projectslearner@gmail.com
- 📸 Instagram
- 📘 Facebook
- ▶️ YouTube
- 📘 LinkedIn

Made for you with ❣️ from ProjectsLearner.