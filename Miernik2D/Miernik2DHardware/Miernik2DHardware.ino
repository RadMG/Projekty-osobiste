#include <Servo.h>
#include <Stepper.h>


const int vertical_pin = 6;
const int vertical_def = 90;
int vertical_pos = 90;
Servo vertical;

const int horizontal_steps = 2048;
const int horizontal_def = 180;
int horizontal_pos = 180;
Stepper horizontal(horizontal_steps, 8, 10, 9, 11);

void writeStepper(int msg_pos){
  int move_val = msg_pos - horizontal_pos;
  horizontal.step(map(move_val, 0, 360, 0, horizontal_steps));
}

void transmitData(int x, int y, int z){
  String msg = String(x) + ":" + String(y) + ":" + String(z);
  Serial.print(msg);
}

void receiveData(){
//Odczytanie wartości
  String msg = Serial.readString();
  msg.trim();
  int msg_vertical = msg.substring(msg.indexOf(':')+1).toInt();
  int msg_horizontal = msg.substring(0, msg.indexOf(':')).toInt();
//Ruch servo
  vertical.write(msg_vertical);
  delay(15);
  vertical_pos = msg_vertical;
//Ruch silnika
  writeStepper(msg_horizontal);
  horizontal_pos = msg_horizontal;
}

void setup() {
  Serial.begin(115200); //Konsola start

  vertical.attach(vertical_pin); //Przypisanie pinu
  vertical.write(vertical_def); //Pozycja startowa
  delay(15);
  vertical_pos = vertical_def;

  horizontal.setSpeed(10);
  writeStepper(horizontal_def);
  horizontal_pos = horizontal_def;

  transmitData(horizontal_pos, vertical_pos, 0);
}

void loop() {
  if (Serial.available() > 0) {
    receiveData();
    transmitData(horizontal_pos, vertical_pos, 0);
  }
}
