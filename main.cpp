#include <iostream>
using std::cout;

#include "SmartPhone.h"

int main(int argc, char **argv)
{
	cout << "Implementando a classe SmartPhone" << '\n';
	
	SmartPhone sp1;
	
	SmartPhone::mostrarInfo();
	
	return 0;
}
