#include <Servo.h>
Servo base, left, right, claw; // 4 objetos servo
void setup()
{
Serial.begin(9600);
base.attach(11); // servo base, pin  Arduino
left.attach(10); // servo izquierdo, pin 4 Arduino
right.attach(9); // servo derecho, pin 5 Arduino
claw.attach(6); // servo garra, pin 6 Arduino
}
void loop()
{
base.write(90); // servo base, rotado 90° inicialmente
left.write(90); // servo izquierdo, rotado 90° inicialmente
right.write(90); // servo derecho, rotado 90° inicialmente
claw.write(25); // servo garra, rotado 25° inicialmente
delay(300); // una actualización constante puede dañar los servos
} 