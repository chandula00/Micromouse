

const int LM393 = 2;
int counter = 0;
int speedM = 0;
float avr;
int c = 0;

void setup()
{
    pinMode(9, OUTPUT);
    Serial.begin(9600);
    analogWrite(9, 100);

    attachInterrupt(digitalPinToInterrupt(LM393), count, RISING);
}

void loop()
{   
    
    
    delay(100);
    if (c<10){
      speedM += counter;
      c++;
    } else {
      avr = speedM /10;
      c = 0;
      speedM = 0;
      Serial.println(avr);
    }
    //counter = 0;
    //Serial.println(counter);
    counter = 0;
}

void count()
{
    counter++;
}
