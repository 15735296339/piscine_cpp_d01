#ifndef _MY_CAT_H_
#define _MY_CAT_H_

#include <string>


class my_cat
{
public:
	my_cat();
	~my_cat();

public:

	static int wr_file(std::string file_name);
};

#endif
