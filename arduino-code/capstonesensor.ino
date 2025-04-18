int sensorPin1 = A0;
int sensorValue1 = 0;

int sensorPin2 = A1;
int sensorValue2 = 0;

int sensorPin3 = A2;
int sensorValue3 = 0;


void setup ()
            { 
              Serial.begin (9600);
          
              pinMode (12, OUTPUT); 
              pinMode (11, OUTPUT); 
              pinMode (10, OUTPUT); 
            

            } 

void loop ()
            { 
              sensorValue1 = analogRead (sensorPin1);
              sensorValue2 = analogRead (sensorPin2);
              sensorValue3 = analogRead (sensorPin3);

              Serial.print("--------------------");
              Serial.println("");
              
              Serial.print("(sensorPin1) ");
              Serial.println(sensorValue1);
              Serial.println("  ");
              
              Serial.print("(sensorPin2) ");
              Serial.println(sensorValue2);
              Serial.println("  ");
              
              Serial.print("(sensorPin3) ");
              Serial.println(sensorValue3);
              Serial.println("  ");



            
            

            if (sensorValue1 >= 700)
                                      {
                                        digitalWrite(10,HIGH);
                                        delay(1000);
                                      }
            /////////////////////////////////////////////////////////////////////////////////////
           else if (sensorValue2 <= 800)
                                      {
                                        digitalWrite(12,HIGH);
                                        delay(1000);
                                      }

            else if (sensorValue3 >= 800)
                                      {
                                        digitalWrite(11,HIGH);
                                        delay(1000);
                                      }
                                      
            else {      
                     digitalWrite(10,LOW); 
                     digitalWrite(11,LOW);
                     digitalWrite(12,LOW);     
                                       
                  }
             
                delay(500);
}