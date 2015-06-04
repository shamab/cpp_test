#include<iostream>
#include<stdlib.h>
template <class T>
class array_algebra

{
	private:	
		T* array;
		int size;

	public:
		//Constructors
		array_algebra(){};
		array_algebra(int);

		//Getters and setters
		T get(int index );
		void set(int index, T value);
		
		//Functions
		array_algebra operator + (const array_algebra&);
		//int subtract();
		//Randomly generate
		void randomly_generate_data();
		void print();
};


template <class T>
array_algebra <T> ::array_algebra(int size)
{	
	array = new T[size];
	this->size= size;
	
}
template <class T>
void array_algebra<T>::set(int index, T value )
{
	if(index<size)
		this->array[index]= value;
	else
		std::cerr<<"Index is greater than size"<<std::endl;

}
template <class T>
T array_algebra<T>::get(int index)
{
	if(index<size)
		return (this->array[index]);
	else
	{
		std::cerr<<" Index "<< index<<" greater than size "<<size<<std::endl;
		exit(1);
	}
}

template <class T>
void array_algebra<T>::randomly_generate_data()
{
	for(int i= 0;i< size;i++)
		this->array[i] = (T) (rand() % 100);
}
template<class T>
array_algebra array_algebra ::operator + (const array_algebra<T>& param)    
{
	array_algebra <T> temp(size);
        for (int i= 0;i < size; i++)
	{
		temp.array[i]= array[i]+ param.array[i];
	}	
	
	return temp;
}
template<class T>
void array_algebra<T>::print()
{
	for(int i=0;i< size; i ++)
	{
		std::cout<<get(i)<<std::endl;
	}
}
int main()
{
	array_algebra <double> arr1(3),arr2(3);
	arr1.randomly_generate_data();
	arr2.randomly_generate_data();
	//arr1.set(100000, 45);
	//std::cout << arr1.get(4) << std::endl;
	/*for (int i=0;i<3;i++)
	{
		int temp;		
		
		arr1.set(i,temp);
		std::cin>>temp;
		arr2.set(i,temp);
	
	}*/
	arr1.print();
	arr2.print();
	//array_algebra <int> result = arr1+arr2;
	//result.print();
	
	return 0;
}
