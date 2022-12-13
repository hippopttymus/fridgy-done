#include <Servo.h>
Servo myservo;

// buzzer stuff
#include <Buzzer.h>
Buzzer buzzer(9);

// temperature settings
float temp;
int tempPin = 4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myservo.attach(11);
  myservo.write(0);
}


void loop() {
        temp = analogRead(tempPin);
        float voltage = temp * 5.0;
        voltage /= 1024.0; 
        float temperatureC = (voltage - 0.5) * 100 ;
        // read analog volt from sensor and save to variable temp
        //temp = temp * 0.48828125;
        // convert the analog volt to its temperature equivalent
        Serial.print("TEMPERATURE = ");
        Serial.print(temperatureC); // display temperature value
        Serial.print("*C");
        Serial.println();
        delay(1000); // update sensor reading each one second

        if(temperatureC > 24.00){
          buzzstarwars();
          Serial.print("Playing star wars!");
        }
        int analogValue = analogRead(A0);
        Serial.print("Analog reading: ");
        Serial.print(analogValue);   // the raw analog reading
        if (analogValue < 10) {
          Serial.println(" - Dark");
        } else if (analogValue < 200) {
          Serial.println(" - Dim");
        } else if (analogValue < 500) {
          Serial.println(" - Light");
        } else if (analogValue < 800) {
          Serial.println(" - Bright");
        } else {
          Serial.println(" - Very bright");
        }      
        while(analogRead(A0) > 200){
          // buzzer play mario 
          buzzdoormario();
          if(analogRead(A0) > 200){
            myservo.write(180);
            delay(1000);
            myservo.write(0);
            break;
          }else{
            break;
          }         
        } 
}


void buzzdoormario(){
  buzzer.begin(100);

  buzzer.sound(NOTE_E7, 80);
  buzzer.sound(NOTE_E7, 80);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_E7, 80);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_C7, 80);
  buzzer.sound(NOTE_E7, 80);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_G7, 80);
  buzzer.sound(0, 240);
  buzzer.sound(NOTE_G6, 80);
  buzzer.sound(0, 240);
  buzzer.sound(NOTE_C7, 80);
  buzzer.sound(0, 160);
  buzzer.sound(NOTE_G6, 80);
  buzzer.sound(0, 160);
  buzzer.sound(NOTE_E6, 80);
  buzzer.sound(0, 160);
  buzzer.sound(NOTE_A6, 80);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_B6, 80);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_AS6, 80);
  buzzer.sound(NOTE_A6, 80);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_G6, 100);
  buzzer.sound(NOTE_E7, 100);
  buzzer.sound(NOTE_G7, 100);
  buzzer.sound(NOTE_A7, 80);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_F7, 80);
  buzzer.sound(NOTE_G7, 80);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_E7, 80);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_C7, 80);
  buzzer.sound(NOTE_D7, 80);
  buzzer.sound(NOTE_B6, 80);
  buzzer.sound(0, 160);
  buzzer.sound(NOTE_C7, 80);
  buzzer.sound(0, 160);
  buzzer.sound(NOTE_G6, 80);
  buzzer.sound(0, 160);
  buzzer.sound(NOTE_E6, 80);
  buzzer.sound(0, 160);
  buzzer.sound(NOTE_A6, 80);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_B6, 80);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_AS6, 80);
  buzzer.sound(NOTE_A6, 80);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_G6, 100);
  buzzer.sound(NOTE_E7, 100);
  buzzer.sound(NOTE_G7, 100);
  buzzer.sound(NOTE_A7, 80);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_F7, 80);
  buzzer.sound(NOTE_G7, 80);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_E7, 80);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_C7, 80);
  buzzer.sound(NOTE_D7, 80);
  buzzer.sound(NOTE_B6, 80);
  buzzer.sound(0, 160);

  buzzer.end(2000);
}

void buzzstarwars(){
  buzzer.begin(10);

  buzzer.sound(NOTE_A3, 500); 
  buzzer.sound(NOTE_A3, 500);
  buzzer.sound(NOTE_A3, 500);
  buzzer.sound(NOTE_F3, 375);
  buzzer.sound(NOTE_C4, 125);

  buzzer.sound(NOTE_A3, 500);
  buzzer.sound(NOTE_F3, 375);
  buzzer.sound(NOTE_C4, 125);
  buzzer.sound(NOTE_A3, 1000);

  buzzer.sound(NOTE_E4, 500); 
  buzzer.sound(NOTE_E4, 500);
  buzzer.sound(NOTE_E4, 500);
  buzzer.sound(NOTE_F4, 375);
  buzzer.sound(NOTE_C4, 125);

  buzzer.sound(NOTE_GS3, 500);
  buzzer.sound(NOTE_F3, 375);
  buzzer.sound(NOTE_C4, 125);
  buzzer.sound(NOTE_A3, 1000);

  buzzer.sound(NOTE_A4, 500);
  buzzer.sound(NOTE_A3, 375);
  buzzer.sound(NOTE_A3, 125);
  buzzer.sound(NOTE_A4, 500);
  buzzer.sound(NOTE_GS4, 375);
  buzzer.sound(NOTE_G4, 125);

  buzzer.sound(NOTE_FS4, 125);
  buzzer.sound(NOTE_E4, 125);
  buzzer.sound(NOTE_F4, 250);
  buzzer.sound(0, 250);
  buzzer.sound(NOTE_AS3, 250);
  buzzer.sound(NOTE_DS4, 500);
  buzzer.sound(NOTE_D4, 375);
  buzzer.sound(NOTE_CS4, 125);

  buzzer.sound(NOTE_C4, 125);
  buzzer.sound(NOTE_B3, 125);
  buzzer.sound(NOTE_C4, 250);
  buzzer.sound(0, 250);
  buzzer.sound(NOTE_F3, 250);
  buzzer.sound(NOTE_GS3, 500);
  buzzer.sound(NOTE_F3, 375);
  buzzer.sound(NOTE_A3, 125);

  buzzer.sound(NOTE_C4, 500);
  buzzer.sound(NOTE_A3, 375);
  buzzer.sound(NOTE_C4, 125);
  buzzer.sound(NOTE_E4, 1000);

  buzzer.sound(NOTE_A4, 500);
  buzzer.sound(NOTE_A3, 375);
  buzzer.sound(NOTE_A3, 125);
  buzzer.sound(NOTE_A4, 500);
  buzzer.sound(NOTE_GS4, 375);
  buzzer.sound(NOTE_G4, 125);

  buzzer.sound(NOTE_FS4, 125);
  buzzer.sound(NOTE_E4, 125);
  buzzer.sound(NOTE_F4, 250);
  buzzer.sound(0, 250);
  buzzer.sound(NOTE_AS3, 250);
  buzzer.sound(NOTE_DS4, 500);
  buzzer.sound(NOTE_D4, 375);
  buzzer.sound(NOTE_CS4, 125);

  buzzer.sound(NOTE_C4, 125);
  buzzer.sound(NOTE_B3, 125);
  buzzer.sound(NOTE_C4, 250);
  buzzer.sound(0, 250);
  buzzer.sound(NOTE_F3, 250);
  buzzer.sound(NOTE_GS3, 500);
  buzzer.sound(NOTE_F3, 375);
  buzzer.sound(NOTE_C4, 125);

  buzzer.sound(NOTE_A3, 500);
  buzzer.sound(NOTE_F3, 375);
  buzzer.sound(NOTE_C4, 125);
  buzzer.sound(NOTE_A3, 1000);

  buzzer.end(500);
}


