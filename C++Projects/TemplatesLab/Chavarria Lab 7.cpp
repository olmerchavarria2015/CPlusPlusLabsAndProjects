//***********************************************************************
// Name: Olmer Chavarria
// Date: 10/14/2016
// Lab: 7
// Description: The purpose of this program is to demonstrate the use of templates.	
//***********************************************************************


#include "stdafx.h"
#include <iostream>
using namespace std;
template <typename T>                   //template
T sumsAll(T UnknownArray[], int length);//prototype
int main()
{
	int intArray[] = { 5,7,10,17 };
	int intArrayLength = sizeof(intArray) / sizeof(intArray[0]);
	double doubleArray[] = { 4.5,3.5,10,17 };
	int doubleArrayLenght = sizeof(doubleArray) / sizeof(doubleArray[0]);
	double longArray[] = { 3000,2000,3000,9000,4,2 };
	int longArrayLenght = sizeof(longArray) / sizeof(longArray[0]);
	int intSum = (int)sumsAll(intArray, intArrayLength);                // casting returned type into their respetive type
	double doubleSum = (double)sumsAll(doubleArray, doubleArrayLenght); //
	long longSum = (long)sumsAll(longArray, longArrayLenght);           //
	
	cout << "The sum of all the numbers inside the arrays that are less than 10  are :"<<endl;
	cout << " int array "<<intSum;
	cout << "   double array " << doubleSum;
	cout << "   long array " << longSum <<endl;
	cin.get();
    return 0;
}
template <typename T>                 
T sumsAll(T UnknownArray[],int length)//method that accept any type.
{
	T number = 0;
	for (int i = 0; i < length; ++i) 
	{
		if (*(UnknownArray+i) < 10)       //this evaluates the values found in the pointer.
		{
			number += *(UnknownArray+i);  // if there is a match, this add the value to the "number" variable.
		}
		
	}
	return number;
}

