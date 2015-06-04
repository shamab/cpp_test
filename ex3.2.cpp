#include<iostream>
#include<cstdlib>
using namespace std;
double *numbers;
int location;
int n;


//to declare and input array of 10 numbers
void inputarray()
{

cout<<"Enter size of array"<<endl;
cin>>n;
numbers = new double[n];
for(location= 0; location< n;location++)
	{
		numbers[location]=rand() %100 + 1;
		cout<<"entered number is"<<numbers[location]<<endl;
		
	}
}


double sum()
{
//function to normalise and sum elements of array
inputarray();
double sum=0;
	for(location= 0; location<n ;location++)
	{
		sum= sum + numbers[location];
	}
	cout<<sum<<endl;
	for(location=n;location>=0;location--)
	{
	
		cout<<double(numbers[location])/sum<<endl;
	}
	
}
int main()
{
sum();
}
