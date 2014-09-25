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


void SmartPhone::updateHistory(const string &newPage)
{
	history.push_back(newPage);
}


void SmartPhone::listHistory( ) const
{
	cout << "As paginas visitas foram\n";
	for(unsigned int i = 0; i < history.size(); i++)
		cout << history[i] << '\n';
}

