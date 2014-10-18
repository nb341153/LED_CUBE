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
                digitalWrite (11, HIGH);
                digitalWrite (5, HIGH);
                delay (1000);
		cout << "LOW #" << i << endl;
                digitalWrite (11, LOW);
                digitalWrite (5, LOW);
                delay (500);
        }

	gpio.makeTestOutput(50,100);
	return 0;
}
