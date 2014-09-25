#ifndef SMARTPHONE_H
#define SMARTPHONE_H

#include <vector>
using std::vector;

#include <string>
using std::string;

class SmartPhone
{
public:
	SmartPhone();
	~SmartPhone();
	
	//A static member function cannot be declared with the keywords virtual, const, volatile, or const volatile.
	static void mostrarInfo( );
	
	void updateHistory(const string &);
	
	void listHistory() const;
	
private:

	const int IDPHONE;
	
	static int numPhones;
	
	const static int RELEASEDATE;
	
	vector<string> history;

};

#endif // SMARTPHONE_H
