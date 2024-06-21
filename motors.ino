// Define global variables for motor control pins
int input1leftmotor = 9;   // Connected to IN1 of L293D
int input2leftmotor = 10;  // Connected to IN2 of L293D
int input3rightmotor = 11; // Connected to IN3 of L293D
int input4rightmotor = 12; // Connected to IN4 of L293D

void setup() {
  // Initialize motor control pins as outputs
  pinMode(input1leftmotor, OUTPUT);
  pinMode(input2leftmotor, OUTPUT);
  pinMode(input3rightmotor, OUTPUT);
  pinMode(input4rightmotor, OUTPUT);
  
  // Initialize Serial communication
  Serial.begin(9600);
  Serial.println("Setup complete. Starting motor tests...");
}

void loop() {
  // Left motor forward
  Serial.println("Left motor forward");
  digitalWrite(input1leftmotor, HIGH);
  digitalWrite(input2leftmotor, LOW);
  
  // Right motor forward
  Serial.println("Right motor forward");
  digitalWrite(input3rightmotor, HIGH);
  digitalWrite(input4rightmotor, LOW);
  
  delay(1000); // Delay to observe motor movement
  
  // Stop both motors
  Serial.println("Stopping motors");
  digitalWrite(input1leftmotor, LOW);
  digitalWrite(input2leftmotor, LOW);
  digitalWrite(input3rightmotor, LOW);
  digitalWrite(input4rightmotor, LOW);
  
  delay(1000); // Delay before next movement
}
