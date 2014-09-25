#ifndef SMARTPHONE_H
#define SMARTPHONE_H

#include <vector>
using std::vector;

#include <string>
using std::string;

#include "Data.h"

class SmartPhone
{
public:
	SmartPhone();
	SmartPhone(const SmartPhone &);
	~SmartPhone();
	
	//A static member function cannot be declared with the keywords virtual, const, volatile, or const volatile.
	static void mostrarInfo( );
	
	void updateHistory(const string &);
	
	void listHistory() const;
	
	void mostrarData() const;
	
private:

	const int IDPHONE;
	
	static int numPhones;
	
	const static Data RELEASEDATE;
	
	vector<string> history;
	
	Data dataAtual;

};

#endif // SMARTPHONE_H
