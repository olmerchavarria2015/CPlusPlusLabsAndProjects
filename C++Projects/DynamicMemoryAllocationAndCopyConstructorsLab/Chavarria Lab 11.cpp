//***********************************************************************
// Name: Olmer Chavarria
// Date: 11/10/2016
// Lab: 11
// Description: this program demonstrates the use of copy contructors as well as 
// dynamic memory allocation. 
//***********************************************************************

#include "stdafx.h"
#include "Cow.h"
#include <iostream>
using namespace std;
int main()
{
	Cow lucy;       //invokes default contructor
	lucy.ShowCow();
	Cow berta("berta", 400);//invokes provided constructor
	berta.ShowCow();
	Cow rupy= berta; //invokes copy constructor//copying inizializing rupy to berta
	rupy.ShowCow();
	Cow genericCow(berta);//invokes copy constructor
	genericCow.ShowCow();
	Cow penny;
	berta = penny;//invokes "=" operator overload//rewriting berta with penny's data
	penny.ShowCow();
	cin.get();
	return 0;
}

