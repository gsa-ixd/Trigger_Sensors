import processing.serial.*;

void setup() {
  sensorSetup();
}


void draw() {
  sensorRead();
  println("sensorReading: ", sensorIntReading);
}
