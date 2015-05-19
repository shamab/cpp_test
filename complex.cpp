#include <iostream>
#include <string>
using namespace std;

class complex
{
public:
int real, imag;
};

int main()
{
	complex a,b,c;
        int real, imag;
	cout << "Enter real part of first number in a+ib" << endl;
	cin >> real;
        a.real = real;
	cout <<"Enter imaginary part" << endl;
	cin >> imag;
        a.imag = imag;
	
	cout << "Enter real part of second number in a+ib" << endl;
	cin >> b.real;
	cout << "Enter imaginary part" << endl;
	cin >> b.imag;
	c.real = a.real+b.real;
	c.imag=a.imag+b.imag;
	if(c.imag>0)
	{	
		cout << "Resultant of addition is" << c.real << "+" << "i" << c.imag<<endl;
	}
	else
	{
		cout << "Resultant of addition is" << c.real << "-" << "i" << c.imag << endl;
	}
return 0;
}

