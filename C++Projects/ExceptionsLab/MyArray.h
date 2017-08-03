#pragma once

#include <stdexcept>
#include <iostream>
using namespace std;

template <class T>
class myarray                               //TEMPLATE CLASS myarray PROTOTYPE
{
private:
	int size;
	T *InnerArray;
public:
	
	myarray(int s);
	T& operator[](int i);
	const T& operator[](int i) const;
	~myarray();
};

// IMPLEMENTATION 

template <class T>
myarray<T>::myarray(int s)                   //CONSTRUCTOR
{
	size = s;
	InnerArray = new T[size];
	
}

template <class T>
T& myarray<T>::operator[](int i)             //SQUARE BRACKETS OPERATOR OVERLOAD
{ 
	// must either throw an exception or return a T type reference
	if (i < 0 || i >= size)
	{
		throw out_of_range("out of range  ");//THROWS AN OUT-OF-RANGE EXCEPTION
	}
	else
	{
		return InnerArray[i];               //RETURNS A REFERENCE TO "T" TYPE
	}
	
}
template <class T>                            
const T& myarray<T>::operator[](int i) const //SQUARE BRACKETS OPERATOR OVERLOAD
{
	if (i < 0 || i >= size)
	{
		throw out_of_range("out of range  "); 
	}
	else
	{
		return InnerArray[i];                
	}
	
}
template <class T>                             //DESTRUCTOR
myarray<T>::~myarray()
{
	delete[]InnerArray;
}
