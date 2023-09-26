#include <stdio.h>
#include <wiringPi.h>

#define LED 0

int main(){
    wiringPiSetup();
    pinMode(LED, OUTPUT);

    while(1){
        digitalWrite(LED, HIGH);
        delay(100);
        digitalWrite(LED, LOW);
        delay(100);
    }
    
    return 0;
}