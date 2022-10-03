#include "Pessoa.h"

Pessoa::Pessoa( )
:phoneNumber(""), name("")
{
        
}

Pessoa::Pessoa( const string &name, const string& phoneNumber,  const vector< string > &socialMediaConection )
{
    this->name = name;

    this->phoneNumber = phoneNumber;
    
    this->socialMediaConection.resize( socialMediaConection.size() );
    for( int i = 0; i < this->socialMediaConection.size( ); i++ )
         this->socialMediaConection[ i ] = socialMediaConection[ i ];

    //printSocialConnection( );
}

Pessoa::Pessoa( const Pessoa &pessoaOut )
{
    this->name = pessoaOut.name;
    this->phoneNumber = pessoaOut.phoneNumber;

    this->socialMediaConection.resize( pessoaOut.socialMediaConection.size() );
    for( int i = 0; i < this->socialMediaConection.size( ); i++ )
        this->socialMediaConection[ i ] = pessoaOut.socialMediaConection[ i ];
}

Pessoa::~Pessoa( )
{

}

 void Pessoa::printSocialConnection( ) const
 {
     cout << "List of social media sites:\n";
     for( int i = 0; i < this->socialMediaConection.size( ); i++ )
        cout << this->socialMediaConection[ i ] << '\n';
 }

ostream &operator<<( ostream &out, const Pessoa &p )
{
    out << "Name: ";
    out << p.name << "\n";
    
    out << "Phone number: ";
    out << p.phoneNumber << "\n";

    p.printSocialConnection( );

    return out;
}
