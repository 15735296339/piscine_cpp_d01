#ifndef _KOALANURSE_
#define _KOALANURSE_

#include <iostream>
#include <fstream>
#include "sickkoala.h"
using namespace std;

class KoalaNurse
{
	private:
		int ID;
		bool working;
		
	public:
		KoalaNurse(int );
		~KoalaNurse();
		void giveDrug(string , SickKoala *);
		string readReport(string );
		void timeCheck();
		
};

#endif
