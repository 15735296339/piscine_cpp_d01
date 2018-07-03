#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	string type;
	float temp;
	temp = 0;
	cin >> temp >> type;
	if(type == "Celsius")
	{
		temp = 9.0 / 5.0 * temp + 32;
		cout.precision(3);
		cout <<setw(16) << fixed << temp <<setw(16) << "Fahrenheit" << endl;
	}
		
	else if(type == "Fahrenheit")
	{
		temp = 5.0 / 9.0 * (temp - 32);
		cout.precision(3);
		cout <<setw(16) << fixed << temp <<setw(16) << "Celsius" << endl;
	}
    else
    {
    	cout<<"Error"<<endl;
	}
    
	return 0;
}
