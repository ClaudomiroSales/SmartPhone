/*
* Multiple line
* comment
*/
#include<iostream>
using std::cout;
using std::endl;

#include "SmartPhone.h"
#include "SmartPhone.cpp"
#include "Data.h"
#include "Data.cpp"
#include "Pessoa.cpp"


int main()
{

   SmartPhone sp1( 132323, Data( 30, 9, 2021 ) );

   //Testing 
   //Pessoa
   vector< string > socialMediaConection{ string("Facebook"), string("Twitter") };
   Pessoa id01( "Jose", "91983738384", socialMediaConection );
   //Pessoa *p;
   //p = &id01;
   //cout << *p << '\n';


   //Testing 
   //void addContact( const Pessoa & );
	//void addContact( const string &, const string &, const vector< string > & );
   
   //Criandos dois contatos
   sp1.addContact( id01 );

   socialMediaConection.push_back( string("Tiktok") );
   sp1.addContact( "Joao", "91982929292", socialMediaConection );

   sp1.printContactList( );

   //Testing
   //Criando outro SmartPhone por cópia
   SmartPhone sp2( sp1 );
   socialMediaConection.push_back( string("Instagram") );
   sp2.addContact( "Maria", "91982019128", socialMediaConection );

   cout << "Lista de contatos do sp2.\n";
   sp2.printContactList( );

   cout << "\n\nUsando o friend ostream &operator\n";
   cout << sp2;


   
   cout << "Test3";

   
   return 0;
}