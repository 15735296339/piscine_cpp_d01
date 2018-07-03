#include "koalanurse.h"
#include "sickkoala.h"
using namespace std;

KoalaNurse::KoalaNurse(int ID)
{
	this->ID = ID;
	this->working = false;
}

KoalaNurse::~KoalaNurse()
{
	cout << "Nurse "<< this->ID << ": Enfin un peu de repos !" << endl;
}


void KoalaNurse::giveDrug(string drug, SickKoala *SickKoala)
{
	//SickKoala->takeDrug(drug);
}

string	KoalaNurse::readReport(string report)
{
	ifstream infile; 
	string drug;
	infile.open(report.c_str()); 
	if(!infile) {
		drug="";
		return drug;
	}
	infile >> drug; 
	return drug;
}

void KoalaNurse::timeCheck()
{
	if(this->working==false)
	{
		cout<<"Nurse "<<this->working<<" : Je commence le travail !"<<endl;
		this->working=true;
	}
	else
	{
		cout<<"Nurse "<<this->working<<" : Je rentre dans ma foret d¡¯eucalyptus !"<<endl;
		this->working=false;
	}
}











