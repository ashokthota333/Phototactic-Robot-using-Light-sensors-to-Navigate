// Define motor control pins
const int input1leftmotor = 9;    // Connected to IN1 of L293D
const int input2leftmotor = 10;   // Connected to IN2 of L293D
const int input3rightmotor = 11;  // Connected to IN3 of L293D
const int input4rightmotor = 12;  // Connected to IN4 of L293D

// Define LDR sensor pins
const int ldr1center = A0;  // Center LDR
const int ldr2left = A1;    // Left LDR
const int ldr3right = A2;   // Right LDR

void setup() {
  // Initialize motor control pins as outputs
  pinMode(input1leftmotor, OUTPUT);
  pinMode(input2leftmotor, OUTPUT);
  pinMode(input3rightmotor, OUTPUT);
  pinMode(input4rightmotor, OUTPUT);

  // Initialize LDR pins as inputs
  pinMode(ldr1center, INPUT);
  pinMode(ldr2left, INPUT);
  pinMode(ldr3right, INPUT);

  // Start Serial communication
  Serial.begin(9600);
  Serial.println("Setup complete. Starting motor tests...");

  // Delay to allow setup to complete
  delay(2000);
}

void loop() {
  // Read LDR values
  int value1 = analogRead(ldr1center);
  int value2 = analogRead(ldr2left);
  int value3 = analogRead(ldr3right);

  // Print LDR values to Serial Monitor
  Serial.print("LDR1 (Center): ");
  Serial.print(value1);
  Serial.print(" | LDR2 (Left): ");
  Serial.print(value2);
  Serial.print(" | LDR3 (Right): ");
  Serial.println(value3);

  // Determine motor actions based on LDR values
  if (value1 > value2 && value1 > value3) {
    Serial.println("Moving straight");
    straight();
  } else if (value2 > value1 && value2 > value3) {
    Serial.println("Turning left");
    left();
  } else if (value3 > value1 && value3 > value2) {
    Serial.println("Turning right");
    right();
  }

  // Add a short delay before the next loop iteration
  delay(1000);
}

// Function to move the robot straight
void straight() {
  digitalWrite(input1leftmotor, HIGH);
  digitalWrite(input2leftmotor, LOW);
  digitalWrite(input3rightmotor, HIGH);
  digitalWrite(input4rightmotor, LOW);
}

// Function to turn the robot left
void left() {
  digitalWrite(input1leftmotor, LOW);
  digitalWrite(input2leftmotor, LOW);
  digitalWrite(input3rightmotor, HIGH);
  digitalWrite(input4rightmotor, LOW);
}

// Function to turn the robot right
void right() {
  digitalWrite(input1leftmotor, HIGH);
  digitalWrite(input2leftmotor, LOW);
  digitalWrite(input3rightmotor, LOW);
  digitalWrite(input4rightmotor, LOW);
}
