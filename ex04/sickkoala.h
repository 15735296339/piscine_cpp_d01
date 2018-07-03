#ifndef SICKKOALA_H_
#define SICKKOALA_H_

#include <iostream>
using namespace std;
class SickKoala
{
	private:
	    string name;
	
	public:
		SickKoala(string );
		~SickKoala();
		void poke();
		bool takeDrug(string );
		void overDrive(string );	
		string getname();
};

#endif
