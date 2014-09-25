#include "SmartPhone.h"

#include <iostream>
using std::cout;

int SmartPhone::numPhones = 0;


const int SmartPhone::RELEASEDATE = 12092014;

SmartPhone::SmartPhone()
:IDPHONE(12345)
{
	cout << "Quantidade de paginas visisitadas " << history.size() << '\n';
	numPhones++;
}

SmartPhone::~SmartPhone()
{
}

void SmartPhone::mostrarInfo( )
{
	cout << "A data de lancamento deste modelo eh:" << '\n'
		 << RELEASEDATE << "\no numero de smartphones vendidos eh:" << '\n'
		 << numPhones;
		 
}


