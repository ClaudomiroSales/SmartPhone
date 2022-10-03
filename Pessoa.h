#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
using std::cout;
using std::ostream;

#include <string>
using std::string;

#include <vector>
using std::vector;

class Pessoa
{
    friend ostream &operator<<( ostream &, const Pessoa & );

public:
    Pessoa( );
    Pessoa( const string &, const string &,  const vector< string > & );
    Pessoa( const Pessoa & );
    ~Pessoa( );

    void printSocialConnection( ) const;

private:

    string name;

    string phoneNumber;

    vector< string > socialMediaConection;

};

#endif // PESSOA_H
