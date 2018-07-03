#include "my_convert_temp.h"
#include <iostream>
#include <iomanip>


my_convert_temp::my_convert_temp(float f, std::string k) : value(f), key(k)
{
}

my_convert_temp::~my_convert_temp()
{
}

float my_convert_temp::convert()
{
	if (key == "Celsius")
	{
		return value / 5.0 * 9.0 + 32;
	}
	else if (key == "Fahrenheit")
	{
		return 5.0 / 9.0 * (value - 32);
	}

	return 0;
}


std::string my_convert_temp::getConvertKey()
{
	if (key == "Celsius")
	{
		return "Fahrenheit";
	}
	
	return "Celsius";
}

int main()
{
	float value;
	std::cin >> value;
	std::string key;
	std::cin >> key;

	if (key != "Celsius" && key != "Fahrenheit")
	{
		std::cout << "param error";
		return 0;
	}

	my_convert_temp temp(value, key);
	std::cout << std::setprecision(4) << std::setw(9) << temp.convert() << std::setw(17);
	std::cout << temp.getConvertKey() << std::endl;

//	system("pause");

	return 0;
}