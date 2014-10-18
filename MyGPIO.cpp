#include "MyGPIO.h"
#include <iostream>

using namespace std;
void GpioHandler::setAllLow()
{
	digitalWrite(24 , LOW);
        digitalWrite(23 , LOW);
        digitalWrite(26 , LOW);
        digitalWrite(15 , LOW);
        digitalWrite(16 , LOW);
        digitalWrite(19 , LOW);
        digitalWrite(13 , LOW);
        digitalWrite(18 , LOW);
        digitalWrite(21 , LOW);
        digitalWrite(12 , LOW);
        digitalWrite(11 , LOW);
        digitalWrite(22 , LOW);
		
}
void GpioHandler::cleanup(){
	setAllLow();
	pinMode (24 , INPUT);
        pinMode (23 , INPUT);
        pinMode (26 , INPUT);
        pinMode (15 , INPUT);
        pinMode (16 , INPUT);
        pinMode (19 , INPUT);
        pinMode (13 , INPUT);
        pinMode (18 , INPUT);
        pinMode (21 , INPUT);
        pinMode (12 , INPUT);
        pinMode (11 , INPUT);
        pinMode (22 , INPUT);

}

GpioHandler::GpioHandler()
{
	wiringPiSetupGpio();
	pinMode (24 , OUTPUT);
        pinMode (23 , OUTPUT);
        pinMode (26 , OUTPUT);
        pinMode (15 , OUTPUT);
        pinMode (16 , OUTPUT);
        pinMode (19 , OUTPUT);
        pinMode (13 , OUTPUT);
        pinMode (18 , OUTPUT);
        pinMode (21 , OUTPUT);
        pinMode (12 , OUTPUT);
        pinMode (11 , OUTPUT);
        pinMode (22 , OUTPUT);
        setAllLow();
	
}
void GpioHandler::makeTestOutput(unsigned int del,
				 unsigned int repetitions){
	digitalWrite(26, HIGH);
	for(int i = 0; i<=repetitions; i++){
		digitalWrite(18, HIGH);
		delay(del);
		digitalWrite(18,LOW);
	}

	digitalWrite(26,LOW);
}
GpioHandler::~GpioHandler()
{
	cout << "Cleanup beginnt .. \n\n";
	cleanup();
	cout << "Cleanup wurde durchgeführt\n";
}


