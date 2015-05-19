#include <iostream>
#include <string>

class complex
{
int real,imaginary;
};
int main()
{
	complex a,b,c;
	a.real;
	cout<<"Enter real part of first number in a+ib"<<endl;
	cin>>a.real;
	cout<<"Enter imaginary part"<<endl;
	cin<<a.imaginary;
	cout<<"Entered first number is"<<a<<"+"<<"i"<<b;
	cout<<"Enter real part of second number in a+ib"<<endl;
	cin>>b.real;
	cout<<"Enter imaginary part"<<endl;
	cin>>b.imaginary;
	c.real=a.real+b.real;
	c.imaginary=a.imaginary+b.imaginary;
	if(c.imaginary>0)
	{	
		cout<<"Resultant of addition is"<<c.real<<"+"<<"i"<<c.imaginary<<endl;
	}
	else
	{
		cout<<"Resultant of addition is"<<c.real<<"-"<<"i"<<c.imaginary<<endl;
	}

>>>>>>> fe163f4f0a4d676d8b5cef7a56fbd9eae4da40a3
}
