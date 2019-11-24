// Basic Bluetooth sketch HC-06_01
// Connect the Hc-06 module and communicate using the serial monitor
//
// The HC-06 defaults to AT mode when first powered on.
// The default baud rate is 9600
// The Hc-06 requires all AT commands to be in uppercase. NL+CR should not be added to the command string
//
 
 
void setup() 
{
    Serial.begin(9600);
    Serial.println("Enter AT commands:");
}
 
void loop()
{
    // Keep reading from Arduino Serial Monitor and send to HC-06
    if (Serial.available())
    {
        Serial.write("Reply:");
        Serial.println(Serial.read());
    }
}
