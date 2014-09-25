#include "SmartPhone.h"

int SmartPhone::numPhones = 0;

SmartPhone::SmartPhone()
:IDPHONE(12345)
{
	numPhones++;
}

SmartPhone::~SmartPhone()
{
}

