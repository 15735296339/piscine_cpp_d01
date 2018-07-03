#include "my_cat.h"
#include <fstream>
#include <iostream>

my_cat::my_cat()
{
}


my_cat::~my_cat()
{
}

int my_cat::wr_file(std::string file_name)
{
	std::ifstream file_stream(file_name.c_str());
	if (!file_stream)
	{
		return -1;
	}

	std::string str;
	while (getline(file_stream, str))
	{
		std::cout << str << std::endl;
	}

	return 0;
}

int main(int argc, char** argv)
{
	if (argc <= 1)
	{
		std::cout << "my_cat: Usage : ./my_cat file [...]";
		return 0;
	}

	for (int i = 1; i < argc; ++i)
	{
		if (my_cat::wr_file(argv[i]) < 0)
		{
			std::cout << "my_cat: " << argv[i] << ": No such file or directory";
		}
	}

	return 0;
}