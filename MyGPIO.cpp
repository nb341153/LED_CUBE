#include "MyGPIO.h"
#include <iostream>

using namespace std;
void GpioHandler::setAllLow()
{
	digitalWrite(10 , LOW);
        digitalWrite(14 , LOW);
        digitalWrite(11 , LOW);
        digitalWrite(3  , LOW);
        digitalWrite(4  , LOW);
        digitalWrite(12 , LOW);
        digitalWrite(2  , LOW);
        digitalWrite(5  , LOW);
        digitalWrite(13 , LOW);
        digitalWrite(1  , LOW);
        digitalWrite(0  , LOW);
        digitalWrite(6  , LOW);
		
}
void GpioHandler::cleanup(){
	setAllLow();
	pinMode (10 , INPUT);
        pinMode (14 , INPUT);
        pinMode (11 , INPUT);
        pinMode (3  , INPUT);
        pinMode (4  , INPUT);
        pinMode (12 , INPUT);
        pinMode (2  , INPUT);
        pinMode (5  , INPUT);
        pinMode (13 , INPUT);
        pinMode (1  , INPUT);
        pinMode (0  , INPUT);
        pinMode (6  , INPUT);

}

GpioHandler::GpioHandler()
{
	wiringPiSetupGpio();
	pinMode (10 , OUTPUT);
        pinMode (14 , OUTPUT);
        pinMode (11 , OUTPUT);
        pinMode (3  , OUTPUT);
        pinMode (4  , OUTPUT);
        pinMode (12 , OUTPUT);
        pinMode (5  , OUTPUT);
        pinMode (13 , OUTPUT);
        pinMode (1  , OUTPUT);
        pinMode (0  , OUTPUT);
        pinMode (6  , OUTPUT);
        setAllLow();
	
}
void GpioHandler::makeTestOutput(unsigned int del,
				 unsigned int repetitions){
	digitalWrite(11, HIGH);
	for(int i = 0; i<=repetitions; i++){
		digitalWrite(5, HIGH);
		delay(del);
		digitalWrite(5,LOW);
	}

	digitalWrite(11,LOW);
}
GpioHandler::~GpioHandler()
{
	cout << "Cleanup beginnt .. \n\n";
	cleanup();
	cout << "Cleanup wurde durchgeführt\n";
}


