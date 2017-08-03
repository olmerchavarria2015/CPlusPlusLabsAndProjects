#include "stdafx.h"
#include "Cow.h"
#include <iostream>
//#include <climits>
//#include <string>
Cow::Cow() 
{
	
	std::cout << "using default constructor\n";
	
	char simpleCowname[5] = {'l','u','c','y'};
	name = new char[strlen(simpleCowname)+1]; 
	strcpy_s(name, strlen(simpleCowname)+1, simpleCowname);
	weight = 800;
	
}
Cow::Cow(const char* n, double w) 
{
	std::cout << "using provided constructor\n";
	name = new char[strlen(n) + 1]; 
	strcpy_s(name, strlen(n) + 1, n);
	weight = w;
}
Cow::Cow(const Cow& c) 
{
	std::cout << "using copy constructor\n";
	name = new char[strlen(c.name) + 1];
	strcpy_s(name, strlen(c.name) + 1, c.name);
	weight = c.weight;
}
Cow::~Cow() 
{
	std::cout << "releasing memory\n";
	delete [] name;
}
Cow& Cow::operator=(const Cow& c) 
{
	std::cout << " ' = ' operator overload member function\n";
	std::cout << "overwriting and existing object into another\n";
	if (this!=&c)
	{
		std::cout << "deleting old object data\n";
		delete[]name;
		name = nullptr;
		std::cout << "allocatin new memory for data\n";
		std::cout << "copying object data into calling object\n";
		name = new char[strlen(c.name) + 1];
		strcpy_s(name, strlen(c.name) + 1, c.name);
		weight = c.weight;
	}
	return *this;
}
void Cow::ShowCow() const 
{
	std::cout << "using ShowCow() function\n";
	
	std::cout << "name : " << name << "\n";
	std::cout << "weight : "<< weight << "\n";
}  