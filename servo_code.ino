#include <Servo.h>
Servo motorOne;
Servo motorTwo;
int x_key = A1;                                               
int y_key = A0;                                               
int x_pos;
int y_pos;
int motorOne_pin = 8;
int motorTwo_pin = 9;  
int initial_position = 90;
int initial_position1 = 90;

void setup () {
Serial.begin (9600);
motorOne.attach (motorOne_pin ); 
motorTwo.attach (motorTwo_pin ); 
motorOne.write (initial_position);
motorTwo.write (initial_position1);
pinMode (x_key, INPUT);                     
pinMode (y_key, INPUT);                      
}
void loop () {
x_pos = analogRead (x_key);  
y_pos = analogRead (y_key);                      

if (x_pos < 300){
if (initial_position < 10) { } else{ initial_position = initial_position - 20; motorOne.write ( initial_position ) ; delay (100) ; } } if (x_pos > 700){
if (initial_position > 180)
{  
}  
else{
initial_position = initial_position + 20;
motorOne.write ( initial_position ) ;
delay (100) ;
}
}
if (y_pos < 300){
if (initial_position1 < 10) { } else{ initial_position1 = initial_position1 - 20; servo2.write ( initial_position1 ) ; delay (100) ; } } if (y_pos > 700){
if (initial_position1 > 180)
{  
}        
else{
initial_position1 = initial_position1 + 20;
motorTwo.write (initial_position1) ;
delay (100) ;
}
}
}
 
