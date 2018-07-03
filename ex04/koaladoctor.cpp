#include "sickkoala.h"
#include "koalanurse.h"
#include "koaladoctor.h"
#include <fstream>
#include <random>
using namespace std;

KoalaDoctor::KoalaDoctor(string name)
{
  this->name = name;
  cout << "Dr." << name << ": Je suis le Dr."<< name << " ! Comment Kreoggez-vous ?" <<endl;
  this->working = false;
}

KoalaDoctor::~KoalaDoctor()
{
  this->name.empty();;
}

void KoalaDoctor::diagnose(SickKoala *SickKoala)
{
  string   drug[] = {"mars", "Buronzand", "Viagra", "Extasy", "Feuille d'eucalyptus"};
  string   report = SickKoala->getName() + ".report";
  ofstream	file(report.c_str(), ios::out);


  cout << "Dr." << this->name << ": Alors qu'est-ce qui vous goerk Mr."<< SickKoala->getName() << " \?" <<endl;

  SickKoala->poke();
  if (file)
    {
      file << drug[random() % 5] << endl;
      file.close();
    }
}

void KoalaDoctor::timeCheck()
{
  if (this->working==false)
  {
  	cout << "Dr."<< this->name << ": Je commence le travail !" <<endl;
  	this->working=true;
  }
        
  else
  {
  	 cout << "Dr."<< this->name << ": Je rentre dans ma foret d'eucalyptus !" << endl;
  	 this->working=false;
  }
}


