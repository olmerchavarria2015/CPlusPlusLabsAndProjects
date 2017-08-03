#include "stdafx.h"
#include "Square.h"
#include <iostream>

void Square::Draw() // the actual code of the class Square here
{
	for(int i=0;i<size;++i)
		for (int j = 0; j < size; ++j) 
		{
		    std::cout << "* ";
			if(j==size-1)
				std::cout << std::endl;
		}
	
}
Square::Square(int s) // Square class constructor
{
	size = s;
}