#ifndef SICKKOALA_H_
#define SICKKOALA_H_

#include <iostream>
using namespace std;
class SickKoala
{
	private:
	    string name;
	
	public:
		SickKoala(string name);
		~SickKoala();
		void poke();
		bool takeDrug(string drug);
		void overDrive(string data);	
};

#endif
