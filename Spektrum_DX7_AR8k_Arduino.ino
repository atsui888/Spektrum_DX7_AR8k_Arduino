// RC Transmitter output to Arduino
// Transmitter: Spektrum DX7 , Receiver: Spektrum AR8000

// AR8000 has one more channel, i.e. Aux3 but DX7 only outputs 7 channels, hence, one is unused
// seems like most transmitters will output min 1000 (1ms), max 2000 (2ms), mid 1,500 ... estimated values
// we can set a two way switch tied to an interrupt to be the "emergency stop"
// another two way switch could be set to RC/Wifi take control or how about bluetooth/RC/Wifi 3-way

/*
  DX7/Ar8k Ch 1 :=  current: Left Joystick->Up_Down, Ar8k_label: Throttle
	When DX7 server is set to 100/100, arduino pulsein() value
   		stick up  : higher value estd max 1,920
   		stick down: lower value estd min 1,100
   	note: when transmitter setting "travel" is set to 150/150, stick up goes to max 2100
   	stick down goes to min 900. 1,100 to 1,920 is for travel setting of 100/100

  DX7/Ar8k Ch 2 :=  current: Right Joystick->Left_Right, Ar8k_label: Aile
   	When DX7 server is set to 100/100, arduino pulsein() value
   		stick left : higher value estd max 1,920
    		stick right: lower value estd min 1,100

  DX7/Ar8k Ch 3 :=  current: Right Joystick->Up_Down, Ar8k_label: Elev
   	When DX7 server is set to 100/100, arduino pulsein() value
   		stick Up  : higher value estd max 1,920
    		stick Down: lower value estd min 1,100

  DX7/Ar8k Ch 4 :=  current: Left Joystick->Left_Right, Ar8k_label: Rudder
   	When DX7 server is set to 100/100, arduino pulsein() value
   		stick Left : higher value estd max 1,920
    		stick Right: lower value estd min 1,100
  
  DX7/Ar8k Ch 5 :=  current: Gear/Switch A, Ar8k_label: A
	Two way switch
   	When DX7 server is set to 100/100, arduino pulsein() value
  		Position 0: higher value estd max 1,920
  		POsition 1: lower value estd min 1,100 

  DX7/Ar8k Ch 6 :=  current: Aux1/Switch D, Ar8k_label: D
	Three way switch
   	When DX7 server is set to 100/100, arduino pulsein() value
  		Position 0: higher value estd max 1,920
  		Position 1: mid value estd 1490 to 1520
  		Position 2: lower value estd min 1,100 

  DX7/Ar8k Ch 7 :=  current: Aux2/R Knob, Ar8k_label: R
	Right Knob
	rotate to right-most: value estd min 1100
  	rotate to left-most:  value estd min 1920

  DX7/Ar8k Ch 8 :=  unused Dx7 has 7 channels, AR8k has 8 channels  
*/

// RC Channel Pins
const byte ArdPin_ReceiverCh1 = 2;
const byte ArdPin_ReceiverCh2 = 3;
const byte ArdPin_ReceiverCh3 = 4;
const byte ArdPin_ReceiverCh4 = 5;
const byte ArdPin_ReceiverCh5 = 6;
const byte ArdPin_ReceiverCh6 = 7;
const byte ArdPin_ReceiverCh7 = 8;


// Init RC Channel Values 
int receiverCh1=0; int receiverCh2=0; int receiverCh3=0; int receiverCh4=0; int receiverCh5=0; 
int receiverCh6=0; int receiverCh7=0; 

void setup() {

  /*pinMode(ArdPin_ReceiverCh1, INPUT); 
  pinMode(ArdPin_ReceiverCh2, INPUT); 
  pinMode(ArdPin_ReceiverCh3, INPUT); 
  pinMode(ArdPin_ReceiverCh4, INPUT); 
  */
  pinMode(ArdPin_ReceiverCh5, INPUT);
  /* 
  pinMode(ArdPin_ReceiverCh6, INPUT); 
  pinMode(ArdPin_ReceiverCh7, INPUT); 
*/
  Serial.begin(9600);
}

void loop() {
  /*receiverCh1 = pulseIn(ArdPin_ReceiverCh1,HIGH,25000); 

  receiverCh2 = pulseIn(ArdPin_ReceiverCh2,HIGH,25000); 
  receiverCh3 = pulseIn(ArdPin_ReceiverCh3,HIGH,25000); 
  receiverCh4 = pulseIn(ArdPin_ReceiverCh4,HIGH,25000); 
*/  receiverCh5 = pulseIn(ArdPin_ReceiverCh5,HIGH,25000); 
/*  receiverCh6 = pulseIn(ArdPin_ReceiverCh6,HIGH,25000); 
  receiverCh7 = pulseIn(ArdPin_ReceiverCh7,HIGH,25000); 
*/
/*  Serial.print("Channel 1:"); 
  Serial.println(receiverCh1);
  Serial.print("Channel 2:"); 
  Serial.println(receiverCh2);        
  Serial.print("Channel 3:"); 
  Serial.println(receiverCh3);        
  Serial.print("Channel 4:"); 
  Serial.println(receiverCh4);        
*/
  Serial.print("Channel 5:"); 
  Serial.println(receiverCh5);
        
/*
  Serial.print("Channel 6:"); 
  Serial.println(receiverCh6);        
  Serial.print("Channel 7:"); 
  Serial.println(receiverCh7);
*/
          
  delay(100); 
  if(receiverCh5==0) Serial.println("ReceiverCh5 is ZERO");
  receiverCh5=0;              
}
