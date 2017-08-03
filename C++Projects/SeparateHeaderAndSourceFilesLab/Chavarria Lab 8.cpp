//***********************************************************************
// Name: Olmer Chavarria
// Date: 10/21/2016
// Lab: 8
// Description: This program demonstrates the use of separated header( .h) and source( .cpp) files. 	
//***********************************************************************


#include "stdafx.h"
#include <iostream>
#include "smallest.h"
#include "largest.h"
using namespace std;


double sum(double dArray[], int lenght);

int main()
{
	double numbers[] = { 4.5, 3.4, 5.6, 9.1, 6.7, 7.8 };

	int lenght = sizeof(numbers) / sizeof(numbers[0]);
	double average = sum(numbers, lenght) / lenght;
	double largestDouble = Largest(numbers, lenght);
	double smallestDouble = Smallest(numbers, lenght);

	cout << "Largest Double is " << largestDouble << endl;
	cout << "Smallest double is " << smallestDouble << endl;
	cout << "the average double is " << average << endl;
	cin.get();
	return 0;
}
double sum(double dArray[], int lenght)//fuction to get the sum of all the elements of the array
{
	double sum = 0;
	for (int i = 0; i< lenght; i++)
	{
		sum += dArray[i];
	}
	return sum;
}

