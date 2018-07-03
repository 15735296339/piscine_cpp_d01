#ifndef _KOALADOCTOR_
#define _KOALADOCTOR_

#include <iostream>
#include "koaladoctor.h"
using namespace std;

class KoalaDoctor{
	private:
	    string   name;
	    bool	working;

	public:
	KoalaDoctor(string);
	~KoalaDoctor();
	void	diagnose(SickKoala *);
	void	timeCheck();
};

#endif
