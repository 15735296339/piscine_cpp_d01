#ifndef _SICKKOALA_H_
#define _SICKKOALA_H_

#include <string>

class SickKoala
{
public:
	SickKoala(std::string str);
	~SickKoala();

	void poke();
	bool takeDrug(std::string str);
	void overDrive(std::string str);

	static void string_replace(std::string &strBig, const std::string &strsrc, const std::string &strdst);

private:

	std::string name;
};

#endif
