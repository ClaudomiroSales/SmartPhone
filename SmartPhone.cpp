#include "SmartPhone.h"

int SmartPhone::numPhones = 0;


const int SmartPhone::RELEASEDATE = 12092014;

SmartPhone::SmartPhone()
:IDPHONE(12345)
{
	numPhones++;
}

SmartPhone::~SmartPhone()
{
}

