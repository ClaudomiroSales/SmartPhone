#include "SmartPhone.h"

#include <iostream>
using std::cout;

int SmartPhone::numPhones = 0;

const Data SmartPhone::RELEASEDATE = Data( 25, 9, 2021 );

SmartPhone::SmartPhone( )
:pinCode(0), IDPHONE( 12345 ), dataAtual( )
{
	numPhones++;	
}

SmartPhone::SmartPhone( int IDPh, const Data &dataOut )
:IDPHONE(IDPh), dataAtual(dataOut)
{
	numPhones++;	
}

SmartPhone::SmartPhone( const SmartPhone &sp )
:pinCode(sp.pinCode), IDPHONE(sp.IDPHONE), dataAtual(sp.dataAtual)
{
	history = sp.history;
	numPhones++;
	
	//Update contact list
	contacts.resize( sp.contacts.size( ) );
	for( int i = 0; i < contacts.size( ); i++ )
		contacts[ i ] = new Pessoa( *sp.contacts[ i ] );//deferenciar o ponteiro. Contacts é um vector de Pessoas

}

SmartPhone::~SmartPhone( )
{

	for( int i = 0; i < contacts.size( ); i++ )
		delete contacts[ i ];

}

void SmartPhone::mostrarInfo( )
{
	cout << "A data de lancamento deste modelo eh: ";
	RELEASEDATE.print( );
	cout << '\n';
	cout << "O numero de smartphones vendidos eh: " << numPhones << '\n'; 
		 
}

void SmartPhone::updateHistory(const string &newPage)
{
	history.push_back( newPage );
}

void SmartPhone::listHistory( ) const
{
	cout << "As paginas visitas foram\n";
	for( unsigned int i = 0; i < history.size( ); i++ )
		cout << history[ i ] << '\n';
}

void SmartPhone::mostrarData( ) const
{
	cout << "A data atual eh: "; dataAtual.print( );	
	cout << '\n';
}

void SmartPhone::printContactList( ) const
{
	cout << "Minha lista de contatos eh:\n\n";
	for( int i = 0; i < contacts.size( ); i++ )
		cout << *contacts[ i ] << '\n';
}

void SmartPhone::addContact( const Pessoa &newcontact )
{
	contacts.push_back( new Pessoa( newcontact ) );	
}

void SmartPhone::addContact( const string &name, const string &phoneNumber, const vector< string > &socialMediaConection )
{
	contacts.push_back( new Pessoa( name, phoneNumber, socialMediaConection ) );	
}

void SmartPhone::deleteLastContact( )
{
	delete contacts[ contacts.size() - 1 ];
	contacts.pop_back( );
}

ostream &operator<<( ostream &out, const SmartPhone &smarty )
{
    out << "A data de lancamento deste modelo eh: ";
	smarty.RELEASEDATE.print( );
	out << '\n';
	out << "O numero de smartphones vendidos eh: " << smarty.numPhones << '\n'; 

	out << "Minha lista de contatos eh:\n\n";
	for( int i = 0; i < smarty.contacts.size( ); i++ )
		out << *smarty.contacts[ i ] << '\n';

    return out;
}