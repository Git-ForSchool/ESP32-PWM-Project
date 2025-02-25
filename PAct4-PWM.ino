/*
* LAB: PAct4A
* Name: ESP32 PWM LED Control
* Group/Name: [Your Name]
* [Short Description]
*/
#define LED_GPIO 5
#define PWM1_Ch 0
#define PWM1_Res 8
#define PWM1_Freq 1000
int PWM1_DutyCycle = 0;
void setup()
{
ledcAttachChannel(LED_GPIO, PWM1_Freq, PWM1_Res, PWM1_Ch);
}
void loop()
{
  while(PWM1_DutyCycle < 255)
  {
    ledcWrite(LED_GPIO, PWM1_DutyCycle++);
    delay(10);
  } 
  while(PWM1_DutyCycle > 0)
  {
    ledcWrite(LED_GPIO, PWM1_DutyCycle--);
    delay(10);
  }
}