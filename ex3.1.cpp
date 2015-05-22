#include<iostream>
using namespace std;
int numbers[10];
int location;


//to declare and input array of 10 numbers
void inputarray()
{

cout<<"Enter the 10 elements"<<endl;

for(location= 0; location< 10;location++)
	{
		cin>>numbers[location];
		cout<<"you entered"<<numbers[location]<<endl;
		
	}
}


double sum()
{
//function to normalise and sum elements of array
inputarray();
double sum=0;
	for(location= 0; location< 10;location++)
	{
		sum= sum + numbers[location];

	}
	for(location=9;location>=0;location--)
	{
		double (numbers[location])=numbers[location]/sum;
		cout<<numbers[location]<<endl;
	}
}
int main()
{
sum();
}
