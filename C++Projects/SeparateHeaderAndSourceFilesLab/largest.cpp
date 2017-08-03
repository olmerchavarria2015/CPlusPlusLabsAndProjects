#include"stdafx.h"
#include "largest.h"
double Largest(double dArray[], int lenght)//fuction to get the largest double of the array
{
	double max = dArray[0];
	for (int i = 0; i < lenght; i++)
	{
		if (dArray[i] > max) max = dArray[i];
	}
	return max;
}