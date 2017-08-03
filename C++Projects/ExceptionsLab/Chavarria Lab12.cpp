//***********************************************************************
// Name: Olmer Chavarria
// Date: 11/18/2016
// Lab: 12
// Description: This program demonstrates the use of class templates 
/////////////// and exceptions.  
//***********************************************************************

#include "stdafx.h"
#include "MyArray.h"                         //INCLUDES THE HEADER FILE WHERE myarray CLASS IS LOCATED
#include <iostream>
using namespace std;

template<typename T>
void trySubscript(myarray<T>& a, int index); //TEMPLATE FUNCTION PROTOTYPE


int main()
{
	//CREATING OBJECTS AND TESTING SUBSCRIPTS
	myarray<int> ia(5);   
	trySubscript(ia, -1);
	trySubscript(ia, 1);
	myarray<double> da(5);
	trySubscript(da, 77);
	trySubscript(da, 3);
	myarray<string> sa(10);
	trySubscript(sa, -55);
	trySubscript(sa, 7);
	cin.get();
    return 0;
}

template<typename T>                        
void trySubscript(myarray<T>& a, int index)   //TEMPLATE FUNCTION INPLEMENTATION
{
	try 
	{
		a[index] = -1;
		cout << "assignment good\n";
	}
	catch (out_of_range ex)                  //CATCH THE EXCEPTION
	{
		cout << ex.what() << endl;           //DISPLAYS INFORMATION ABOUT THE EXCEPTION
	}
}