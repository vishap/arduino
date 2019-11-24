// Basic Bluetooth sketch HC-06_01
// Connect the Hc-06 module and communicate using the serial monitor
//
// The HC-06 defaults to AT mode when first powered on.
// The default baud rate is 9600
// The Hc-06 requires all AT commands to be in uppercase. NL+CR should not be added to the command string
//
 
#define D_PIN1 12
#define D_PIN2 11
#define D_PIN3 10

void setup() 
{
  pinMode(D_PIN1, OUTPUT);
  pinMode(D_PIN2, OUTPUT);
  pinMode(D_PIN3, OUTPUT);
}

int i = 1;

int onoff(int i){
  return i ? HIGH : LOW;
}

void loop()
{
  digitalWrite(D_PIN1, onoff(i&0x1));
  digitalWrite(D_PIN2, onoff(i&0x2));
  digitalWrite(D_PIN3, onoff(i&0x4));
  delay(1000);
  i <<= 1;
  i = (i<8) ? i : 1;
}
