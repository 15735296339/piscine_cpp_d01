#include <iostream>
#include <fstream>
using namespace std;
void my_cat(char **argv)
{
	int	count;
	count = 0;
	char c;
	while (argv[++count] != NULL)
	{
		ifstream file(argv[count], ios::in);
		if (!file)
			cerr << "my_cat: " << argv[count] <<": No such file or directory"<<endl;
		else
		while (file.get(c))
			cout << c;
	}
}

int main(int argc, char **argv)
{
	if (argc >= 2)
		my_cat(argv);
	else
		cout << "my_cat: Usage : ./my_cat file [...]"<<endl;
	return 0;
}
