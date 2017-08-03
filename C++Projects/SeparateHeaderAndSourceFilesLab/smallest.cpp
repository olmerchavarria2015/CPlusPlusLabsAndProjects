#include"stdafx.h"
#include "smallest.h"
double Smallest(double dArray[], int lenght)//fuction to get the smallest double of the array
{
	double min = dArray[0];

	for (int i = 0; i < lenght; i++)
	{
		if (min > dArray[i]) min = dArray[i];
	}
	return min;
}