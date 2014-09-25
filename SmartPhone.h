#ifndef SMARTPHONE_H
#define SMARTPHONE_H

class SmartPhone
{
public:
	SmartPhone();
	~SmartPhone();
	
	//A static member function cannot be declared with the keywords virtual, const, volatile, or const volatile.
	static void mostrarInfo( );
	
private:

	const int IDPHONE;
	
	static int numPhones;
	
	const static int RELEASEDATE;

};

#endif // SMARTPHONE_H
