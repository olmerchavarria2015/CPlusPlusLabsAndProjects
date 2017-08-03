//***********************************************************************
// Name: Olmer Chavarria
// Date: 11/03/2016
// Lab: 10
// Description: This program demonstrates how to overload operators. and
// the confusion that can be created by choosing strange behaviors for standard
// operations
//***********************************************************************

#include "stdafx.h"
#include <iostream>
using namespace std;

class StrangeInt 
{
  public:
	  int singleInterger;
	  
	  StrangeInt(int n) 
	  {
		  singleInterger = n;
	  }
	  StrangeInt() {}
	  void setValue(int n) 
	  {
		  singleInterger = n;
	  }
	  const int GetValue()const 
	  {
		  return singleInterger; //?????
	  }
	  friend std::ostream& operator<<(std::ostream& os, const StrangeInt& si)
	  {
		  os << "StrangeInt is " << si.GetValue();
		  return os;
	  }
	  StrangeInt operator+(const StrangeInt& right) const 
	  {
		  StrangeInt product;
		  product.singleInterger = singleInterger * right.singleInterger;
		  return product;
	  }
};

int main()
{
	StrangeInt a(1000);
	StrangeInt b(10);
	StrangeInt c(20);
	StrangeInt z;

	z = a + b + c;
	std::cout << z << std::endl;
	cin.get();
    return 0;
}

