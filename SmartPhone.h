#ifndef SMARTPHONE_H
#define SMARTPHONE_H

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include "Pessoa.h"

#include "Data.h"

class SmartPhone
{
	friend ostream &operator<<( ostream &, const SmartPhone & );
	
public:
	SmartPhone( );
	SmartPhone( const SmartPhone &);
	SmartPhone( int, const Data & = Data( 25, 9, 2014) );
	~SmartPhone( );
	
	//A static member function cannot be declared with the keywords virtual, const, volatile, or const volatile.
	static void mostrarInfo( );
	
	void updateHistory( const string & );
	
	void listHistory( ) const;
	
	void mostrarData( ) const;

	void printContactList( ) const;

	void addContact( const Pessoa & );
	void addContact( const string &, const string &, const vector< string > & );

	void deleteLastContact( );
	
private:

	int pinCode;

	const int IDPHONE;
	
	static int numPhones;
	
	const static Data RELEASEDATE;
	
	vector< string > history;
	
	Data dataAtual;	

	vector< Pessoa * > contacts;

};

#endif // SMARTPHONE_H
