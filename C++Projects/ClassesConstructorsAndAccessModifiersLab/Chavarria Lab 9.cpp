//***********************************************************************
// Name: Olmer Chavarria
// Date: 10/25/2016
// Lab: 9
// Description: This program demonstrates the use of classes, constructors, 
// and access modifiers with separated header( .h) and source( .cpp) files. 	
//***********************************************************************


#include "stdafx.h"
#include<iostream>
#include "Square.h" //including the class Square
using namespace std;
int main()
{

	Square sq1(5);//initializing objects from the Square class
	Square sq2(8);//
	cout << "5x5 square" << endl;
	sq1.Draw();
	cout << "8x8 square" << endl;
	sq2.Draw();
	cin.get();
    return 0;

}

