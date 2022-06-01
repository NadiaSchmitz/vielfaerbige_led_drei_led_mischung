int drei_led_rot = 6;
int drei_led_gruen = 5;
int drei_led_blau = 3;
int licht = 150;
int dunkel = 0;

void setup() {
  pinMode(drei_led_rot,OUTPUT);
  pinMode(drei_led_gruen,OUTPUT);
  pinMode(drei_led_blau, OUTPUT);
}

void loop() {
  analogWrite(drei_led_rot, licht);
  analogWrite(drei_led_gruen, licht);
  delay(1000);
  analogWrite(drei_led_rot, dunkel);
  analogWrite(drei_led_gruen, dunkel);
  delay(100);
  
  analogWrite(drei_led_blau, licht);
  analogWrite(drei_led_gruen, licht);
  delay(1000);
  analogWrite(drei_led_blau, dunkel);
  analogWrite(drei_led_gruen, dunkel);
  delay(100);
  
  analogWrite(drei_led_rot, licht);
  analogWrite(drei_led_blau, licht);
  delay(1000);
  analogWrite(drei_led_rot, dunkel);
  analogWrite(drei_led_blau, dunkel);
  delay(100);
}
