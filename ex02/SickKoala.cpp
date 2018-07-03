#include "SickKoala.h"

#include <iostream>

SickKoala::SickKoala(std::string str) : name(str)
{

}

SickKoala::~SickKoala()
{
	std::cout << "Mr." << name << ": Kreooogg !! Je suis gueriiii !" << std::endl;
}

void SickKoala::poke()
{
	std::cout << "Mr." << name << ": Gooeeeerrk !! :'(" << std::endl;
}

bool SickKoala::takeDrug(std::string str)
{
	if (str == "mars")
	{
		std::cout << "Mr." << name << ": Mars, et ca kreog !" << std::endl;
	}
	else if (str == "Buronzand")
	{
		std::cout << "Mr." << name << ": Et la fatigue a fait son temps !" << std::endl;
	}
	else
	{
		std::cout << "Mr." << name << ": Goerkreog !" << std::endl;
		return false;
	}

	return true;
}

void SickKoala::overDrive(std::string str)
{
	SickKoala::string_replace(str, "Kreog !", "1337 !");

	std::cout << "Mr." << name << ": " << str << std::endl;
}

void SickKoala::string_replace(std::string &strBig, const std::string &strsrc, const std::string &strdst)
{
	std::string::size_type pos = 0;
	std::string::size_type srclen = strsrc.size();
	std::string::size_type dstlen = strdst.size();

	while ((pos = strBig.find(strsrc, pos)) != std::string::npos)
	{
		strBig.replace(pos, srclen, strdst);
		pos += dstlen;
	}
}

int main()
{
	SickKoala* p_koala = new SickKoala("SickKoala");
	if (!p_koala)
	{
		return 0;
	}

	p_koala->poke();
	p_koala->takeDrug("mars");
	p_koala->overDrive("Kreog ! Ca boume ?");
	
	delete p_koala;
	p_koala = nullptr;

#ifndef POSIX
	system("pause");
#endif // POSIX
	return 0;
}