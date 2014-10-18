#include <iostream>
#include <wiringPi.h>
#include "MyGPIO.h"
using namespace std;

int main(){
	cout << "test"<< endl;
	GpioHandler gpio;
	for (int i=0; i<50; i++)
        {
                cout << "HIGH #" << i << endl;
                digitalWrite (12, HIGH);
                digitalWrite (23, HIGH);
                delay (1000);
								cout << "LOW #" << i << endl;
                digitalWrite (12, LOW);
                digitalWrite (23, LOW);
                delay (500);
        }*

	gpio.makeTestOutput(50,100);
	return 0;
}
