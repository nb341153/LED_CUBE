#include <wiringPi.h>

using namespace std;

class GpioHandler
{
	void setAllLow();
	void cleanup();
	public:
	GpioHandler();
	~GpioHandler();
	void makeTestOutput(unsigned int,unsigned int);	
	

};
