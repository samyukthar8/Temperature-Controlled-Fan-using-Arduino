#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
float temp;
int tempPin = A0;
#define fan 9
void setup () ;
pinMode (fan, OUTPUT);
lcd.begin(16,3);
lcd.setCursor(1,0);
lcd.print("Lets Get Started");
delay(2000);
lcd.clear();
lcd.print("AUTO TEMPERATURE");
delay(2000);
lcd.clear();
}
void loop()
{
lcd.setCursor(3, 0);
lcd.print("Recording");
lcd.setCursor(2, 1);
lcd.print("Temperature...");
delay(3000);
lcd.clear();
lcd.setCursor(0, 2);
temp = analogRead(tempPin);


temp = temp * 0.2;
temp = temp - 5;
lcd.setCursor(0, 0);
lcd.print("TEMPERATURE = ");
lcd.setCursor(5, 1);
lcd.print(temp); //Printing Temp
delay(3000);
lcd.clear();
if(temp <=41.00)
{
analogWrite(9, 0);
lcd.print("Fan Off");
delay(2000);
lcd.clear();
}
else if(temp <=41.20)
{
analogWrite(fan, 60);
lcd.print("Fan Speed: 20% ");
delay(2000);
lcd.clear();
}
else if(temp <=41.40)
{
analogWrite(fan, 60);
lcd.print("Fan Speed: 20% ");
delay(2000);


lcd.clear(); }
else if(temp <=41.60) {
analogWrite(fan, 60);
lcd.print("Fan Speed: 20% ");
delay(2000);
lcd.clear(); }
else if(temp <=41.80) {
analogWrite(fan, 60);
lcd.print("Fan Speed: 20% ");
delay(2000);
lcd.clear(); }
else if(temp<=42.00) {
analogWrite(fan, 88);
lcd.print("Fan Speed: 40% ");
delay(2000);
lcd.clear(); }
else if(temp<=42.20) {
analogWrite(fan, 88);
lcd.print("Fan Speed: 40% ");


delay(2000);
lcd.clear(); }
else if(temp<=42.40) {
analogWrite(fan, 88);
lcd.print("Fan Speed: 40% ");
delay(2000);
lcd.clear(); }
else if(temp<=42.60) {
analogWrite(fan, 88);
lcd.print("Fan Speed: 40% ");
delay(2000);
lcd.clear(); }
else if(temp<=42.80) {
analogWrite(fan, 88);
lcd.print("Fan Speed: 40% ");
delay(2000);
lcd.clear(); }
else if(temp<=43.00) {
analogWrite(fan, 116);


lcd.print("Fan Speed: 60% ");
delay(2000);
lcd.clear(); }
else if(temp<=43.20) {
analogWrite(fan, 116);
lcd.print("Fan Speed: 60% ");
delay(2000);
lcd.clear(); }
else if(temp<=43.40) {
analogWrite(fan, 116);
lcd.print("Fan Speed: 60% ");
delay(2000);
lcd.clear(); }
else if(temp<=43.60) {
analogWrite(fan, 116);
lcd.print("Fan Speed: 60% ");
delay(2000);
lcd.clear(); }
else if(temp<=43.80) {



analogWrite(fan, 116);
lcd.print("Fan Speed: 60% ");
delay(2000);
lcd.clear(); }
else if(temp<=44.00) {
analogWrite(fan, 144);
lcd.print("Fan Speed: 80% ");
delay(2000);
lcd.clear(); }
else if(temp<=44.20) {
analogWrite(fan, 144);
lcd.print("Fan Speed: 80% ");
delay(2000);
lcd.clear(); }
else if(temp<=44.40) {
analogWrite(fan, 144);
lcd.print("Fan Speed: 80% ");
delay(2000);
lcd.clear(); }
else if(temp<=44.60)


{
analogWrite(fan, 144);
lcd.print("Fan Speed: 80% ");
delay(2000);
lcd.clear(); }
else if(temp<=44.80) {
analogWrite(fan, 144);
lcd.print("Fan Speed: 80% ");
delay(2000);
lcd.clear(); }
else if(temp<=45.00) {
analogWrite(fan, 172);
lcd.print("Fan Speed: 90% ");
delay(2000);
lcd.clear(); }
else if(temp<=45.20) {
analogWrite(fan, 172);
lcd.print("Fan Speed: 90% ");
delay(2000);
lcd.clear(); }


else if(temp<=45.40) {
analogWrite(fan, 172);
lcd.print("Fan Speed: 90% ");
delay(2000);
lcd.clear(); }
else if(temp<=45.60) {
analogWrite(fan, 172);
lcd.print("Fan Speed: 90% ");
delay(2000);
lcd.clear(); }
else if(temp<=45.80) {
analogWrite(fan, 172);
lcd.print("Fan Speed: 90% ");
delay(2000);
lcd.clear(); }
else if(temp>=46.00) {
analogWrite(fan, 200);
lcd.print("Fan Speed: 100% ");
delay(2000);
lcd.clear(); }

}