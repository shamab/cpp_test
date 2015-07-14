#include<iostream>
#include"spracticestats.hpp"
#include<cmath>

 Statistics::Statistics (no_elements)
{
	this->no_elements = no_elements;
	array = new value_type[no_elements];
}

void Statistics::random_generate()
{
	for(int i= 0; i< no_elements; i++)
		{
			array[i]=rand()%100;
		}
}
double add(int no_elements, int *array)
{
	double sum(0);
	for(int i= 0; i< no_elements; i++)
	{
		sum = sum + array[i];
	}
	return sum
}
void Statistics:: mean()
{
	
        std::cout<<"Mean is"<<add(no_elements, array)/no_elements<<std::endl;
	
}

Statistics::value_type stddev ()
{	
	double sum2(0);
	for(int i=0; i< no_elements; i++)
	{
		sum2 = sum2 + pow(add(no_elements, array)/no_elements,2);
	}
	std::cout<<"Standard Deviation is"<<(sqrt(sum2/no_elements - 1))<<std::endl;
}
	

