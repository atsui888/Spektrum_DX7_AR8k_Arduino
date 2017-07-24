// This file contains all channels of the DX7, in the main file, we will only use what we need.

// begin block comment
/*

// RC Transmitter output to Arduino
// Transmitter: Spektrum DX7 , Receiver: Spektrum AR8000

#define LED_PIN 11

// RC Channel Values
int ch1=0; // receiver label: Throttle
int ch2=0; // receiver label: Aile
int ch3=0; // receiver label: Elev
int ch4=0; // receiver label: Rudder
int ch5=0; // receiver label: Gear
int ch6=0; // receiver label: Aux1
int ch7=0; // receiver label: Aux2

// AR8000 has one more channel, i.e. Aux3 but DX7 only outputs 7 channels, hence, one is unused
// seems like most transmitters will output min 1000 (1ms), max 2000 (2ms), mid 1,500 ... estimated values
// rc notes:
// we can set a two way switch tied to an interrupt to be the "emergency stop"
// another two way switch could be set to RC/Wifi take control or how about bluetooth/RC/Wifi 3-way

// RC Channel Pins
byte Pin_Ch1 = 2;
byte Pin_Ch2 = 3;
byte Pin_Ch3 = 4;
byte Pin_Ch4 = 5;
byte Pin_Ch5 = 6;
byte Pin_Ch6 = 7;
byte Pin_Ch7 = 8;

void setup() {

  pinMode(Pin_Ch1, INPUT); 
  // currently set to Throttle/Left Joystick up_down
  // stick up: higher value estd max 1,920
  // stick down: lower value estd min 1,100
  // note: when transmitter setting "travel" is set to 150/150, stick up goes to max 2100
  //       stick down goes to min 900. 1,100 to 1,920 is for travel setting of 100/100
  
  //pinMode(Pin_Ch2, INPUT);
  // currently set to Aile/Right Joystick left_right
  // stick left: higher value estd max 1,920
  // stick right: lower value estd min 1,100
  
  //pinMode(Pin_Ch3, INPUT);
  // currently set to Elev/Right Joystick up_down
  // stick up: higher value estd max 1,920
  // stick down: lower value estd min 1,100 
  
  //pinMode(Pin_Ch4, INPUT);
  // currently set to Rudder/Left Joystick left_right
  // stick left: higher value estd max 1,920
  // stick right: lower value estd min 1,100 

  //pinMode(Pin_Ch5, INPUT);
  // currently set to Gear/Switch A
  // Position 0: higher value estd max 1,920
  // POsition 1: lower value estd min 1,100 

  //pinMode(Pin_Ch6, INPUT);
  // currently set to Aux1/Switch D (3 way switch)
  // Position 0: higher value estd max 1,920
  // Position 1: mid value estd 1490 to 1520
  // Position 2: lower value estd min 1,100 

  //pinMode(Pin_Ch7, INPUT);    
  // currently set to Aux2/R Knob
  // rotate to right-most: value estd min 1100
  // rotate to left-most:  value estd min 1920

  Serial.begin(9600);

}

void loop() {
  ch1 = pulseIn(Pin_Ch1, HIGH, 25000); 
  //ch2 = pulseIn(Pin_Ch2, HIGH, 25000); 
  //ch3 = pulseIn(Pin_Ch3, HIGH, 25000); 
  //ch4 = pulseIn(Pin_Ch4, HIGH, 25000); 
  //ch5 = pulseIn(Pin_Ch5, HIGH, 25000); 
  //ch6 = pulseIn(Pin_Ch6, HIGH, 25000); 
  ch7 = pulseIn(Pin_Ch7, HIGH, 25000); 

  Serial.print("Channel 1:"); 
  Serial.println(ch1);        
  //Serial.print("Channel 2:");
  //Serial.println(ch2);
  //Serial.print("Channel 3:");
  //Serial.println(ch3);
  //Serial.print("Channel 4:"); 
  //Serial.println(ch4);        
  //Serial.print("Channel 5:");
  //Serial.println(ch5);
  //Serial.print("Channel 6:");
  //Serial.println(ch6);
  //Serial.print("Channel 7:");
  //Serial.println(ch7);
  delay(100);               
}

// end block comment
*/