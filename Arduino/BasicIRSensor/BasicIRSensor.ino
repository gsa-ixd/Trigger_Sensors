int distance;

const int sensorpin = A0; //the pin the distance sensor is routed to.


void setup() {
  // put your setup code here, to run once:
  //initialise the inputs and outputs.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(sensorpin, INPUT);
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.begin(9600); //open the serial port
}

void loop() {
  distance = analogRead(sensorpin);

  //Serial.print("distance :");
  Serial.println(distance);

  delay(50); //arbitary delay to control influx of data
}
