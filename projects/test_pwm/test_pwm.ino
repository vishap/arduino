// Basic Bluetooth sketch HC-06_01
// Connect the Hc-06 module and communicate using the serial monitor
//
// The HC-06 defaults to AT mode when first powered on.
// The default baud rate is 9600
// The Hc-06 requires all AT commands to be in uppercase. NL+CR should not be added to the command string
//
 
#define D_PIN1 11
#define D_PIN2 10
#define D_PIN3 9

/*


*/

void setup() 
{
  pinMode(D_PIN1, OUTPUT);
  pinMode(D_PIN2, OUTPUT);
  pinMode(D_PIN3, OUTPUT);
}

int brightness = 0;
int fade = 5;

void loop()
{
  analogWrite(D_PIN1, brightness);
  analogWrite(D_PIN2, 255 - brightness);
  analogWrite(D_PIN3, brightness);
  delay(30);
  
  if (brightness <= 0){
    fade = 5;
  } else if (brightness >= 255){
    fade = -5;
  }
  brightness += fade;
}
