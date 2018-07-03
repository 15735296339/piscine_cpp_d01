#include <iostream>
#include "sickkoala.h"
using namespace std; 


SickKoala::SickKoala(string name)
{
	this->name=name;
}

void SickKoala::poke()
{
	cout << "Mr. " << this->name << ":  Gooeeeeerrk !! :¡¯(" <<endl;
}

bool SickKoala::takeDrug(string drug)
{
	if ( drug == "mars" )
	{
		cout << "Mr. " << this->name << ": Mars, et ca kreog !" << endl;
		return true;
	}

	else if (drug == "Buronzand")
	{
		cout << "Mr. " << this->name << ": Et la fatigue a fait son temps !" <<endl;
		return true;
	}
	else
	{
		cout << "Mr. " << this->name << ": Goerkreog !" << endl;
		return false;
	}
}

void SickKoala::overDrive(string data)
{
	int position;
	while ((position = data.find("Kreog !")) != int(string::npos))
	{
		data.replace(position, 7, "1337 !", 0, 6);
	}
	cout << "Mr. " << this->name << ": " << data << endl;
}

SickKoala::~SickKoala()
{
	cout << "Mr. " << this->name << ": Kreooogg !! Je suis gueriiii !" <<endl;
}


