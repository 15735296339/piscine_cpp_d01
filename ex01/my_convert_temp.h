#ifndef _MY_CONVERT_TEMP_
#define _MY_CONVERT_TEMP_

#include <string>

class my_convert_temp
{
public:
	my_convert_temp(float f, std::string k);
	~my_convert_temp();

	inline float convert();

	std::string getConvertKey();

private:

	std::string key;
	float value;
};

#endif