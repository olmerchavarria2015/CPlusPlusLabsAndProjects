//***********************************************************************
// Name: Olmer Chavarria
// Date: 09/01/2016
// Lab: 2
// Description: This program asks the user to enter a number of seconds 
// as an interger value then displays the equivalent in days, hours, minutes, and seconds.
// This program uses symbolic constants to represent seconds, minutes, hours, and days.
//***********************************************************************

#include "stdafx.h"
#include <iostream>
#include <iomanip>                //IO manipulation library
using namespace std;
const  int second = 1;            //symbolic constants declarations
const int minutes = second * 60;//   
const int hours = minutes * 60; //
const int days = hours * 24;    //


int main()
{
	int numberOfSeconds;

	cout << "Enter number of seconds" << endl;

	cin >> numberOfSeconds;       //user input for seconds

	if (numberOfSeconds < 0)      //sorts out negative numbers
	{
		cout << "enter numbers only" << endl;

	}
	else {
		//output is formatted to 2 decimal places
		cout << endl;
		cout << fixed << setprecision(2) << numberOfSeconds << " seconds = "
			<< numberOfSeconds / days << " days,  "
			<< (numberOfSeconds % days) / hours << " hours,  "
			<< ((numberOfSeconds % days) % hours) / minutes << " minutes,  "
			<< (((numberOfSeconds % days) % hours) % minutes) / second << " seconds  " << endl;
		cout << endl;
		cin.get();
		cin.get();
	}

	std::getchar();//wait for user to press any key to end program.

	return 0;
}
