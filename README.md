Phototactic Robot: Using Light Sensors to Navigate
Project Overview :
This project involves creating a phototactic robot that uses light sensors (LDRs) to detect and navigate towards the brightest light source. The robot is designed using an Arduino Uno, L293D motor driver, and DC motors, with the entire project simulated and tested on Tinkercad.

Components:
Arduino Uno: Microcontroller to control the robot.
L293D Motor Driver: Drives the DC motors based on Arduino signals.
3x Light Dependent Resistors (LDRs): Detects light intensity.
2x DC Motors: Controls the robot's movement.
Breadboard and Jumper Wires: For connections.
Features
Light Detection: Uses three LDRs to detect light intensity from different directions (center, left, right).
Motor Control: Uses an L293D motor driver to control the movement of the DC motors based on the light sensor readings.
Directional Movement:
Moves forward if the center LDR detects the most light.
Turns left if the left LDR detects the most light.
Turns right if the right LDR detects the most light.
Circuit Diagram
Refer to the schematic.pdf file for the detailed circuit connections.

Code
The Tinkercad codes are availble under code section.

Setup of motor and sensor pins.
Reading light intensity from LDRs.
Controlling motor direction based on light intensity.
Usage
Connect Components: Assemble the circuit as per the schematic.
Upload Code: Upload the Phototactic_Robot.ino code to the Arduino Uno.
Test the Robot: Power the circuit and observe the robot's movement in response to varying light conditions.
Schematic
Refer to the schematic.pdf file for the detailed circuit connections.

Simulation
This project was simulated and tested on Tinkercad. 

Future Improvements
Enhance sensitivity by using advanced light sensors.
Implement complex navigation algorithms for various lighting conditions.
Add obstacle avoidance capabilities.

Reference:
https://www.instructables.com/Light-Following-Robot-Using-Arduino/

Contact
For any questions or suggestions, feel free to contact me at ashokthota333@gmail.com
