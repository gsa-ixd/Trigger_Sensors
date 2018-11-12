
Serial myPort;  // Create object from Serial class
int val;      // Data received from the serial port

void sensorSetup(){
  printArray(Serial.list()); //print all dveices
  String portName = Serial.list()[3];

  myPort = new Serial(this, portName, 9600);

}

void sensorRead(){

  if ( myPort.available() > 0) {  // If data is available,
    val = myPort.read();         // read it and store it in val
  }


}
