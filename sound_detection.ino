
void setup(){ 
  Serial.begin(9600); // open serial port, set the baud rate to 9600 bps
}
void loop()
    {int val;
      val=analogRead(0);   //connect mic sensor to Analog 0
      Serial.print("Sound=");
      Serial.println(val,DEC);//print the sound value to serial        
    }
