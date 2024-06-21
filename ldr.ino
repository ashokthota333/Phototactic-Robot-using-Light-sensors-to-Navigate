int ldr1center = A0;
int ldr2left = A1;
int ldr3right = A2;

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int value1 = analogRead(ldr1center); // Read analog value from LDR1
  int value2 = analogRead(ldr2left);   // Read analog value from LDR2
  int value3 = analogRead(ldr3right);  // Read analog value from LDR3
  
  // Print the values to the serial monitor
  Serial.print("LDR1 (Center): ");
  Serial.println(value1);
  
  Serial.print("LDR2 (Left): ");
  Serial.println(value2);
  
  Serial.print("LDR3 (Right): ");
  Serial.println(value3);
  
  delay(1000); // Adjust delay as needed
}
