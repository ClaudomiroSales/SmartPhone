#include "SmartPhone.h"

#include <iostream>
using std::cout;

int SmartPhone::numPhones = 0;


const Data SmartPhone::RELEASEDATE = Data(25,9,2014);

SmartPhone::SmartPhone()
:IDPHONE(12345)
{
	cout << "Quantidade de paginas visisitadas " << history.size() << '\n';
	numPhones++;
}

SmartPhone::SmartPhone(const SmartPhone &sp)
:IDPHONE(sp.IDPHONE)
{
	cout << "\n\nNew SmartPhone.\n";
	history = sp.history;
	cout << "Quantidade de paginas visisitadas " << history.size() << '\n';
	listHistory();
	numPhones++;
}


SmartPhone::~SmartPhone()
{
}

void SmartPhone::mostrarInfo( )
{
	cout << "A data de lancamento deste modelo eh:" << '\n';
		  RELEASEDATE.print(); 
	cout << "\no numero de smartphones vendidos eh:" << '\n'
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

