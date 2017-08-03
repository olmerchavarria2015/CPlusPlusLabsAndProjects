//***********************************************************************
// Name: Olmer Chavarria
// Date: 09/22/2016
// Lab: 4
// Description: The purpose of this program is to demonstrate the use of  
// loops and 2D arrays.	
//***********************************************************************

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int numWords = 0;
	int totalLetters = 0;
	
	cout << "Please enter how many words you want write: ";
	cin >> numWords;
	cin.get();

	std::string* words = new string[numWords];
	cout << "type your words with no blank spaces in between\n";
	for (int i = 0; i < numWords; i++)
	{
		getline(cin, words[i]);
		words[i] = words[i] + '.';// adding a dot at the end of every string
	}
	
	cout << endl;//space for clarity

	for (int n = 0; n < numWords; n++)
	{
		int count = 0;                   
		while (words[n][count] != '.')//regular string array can be passed as a 2D array
		{                             // the expression makes the loop stop reading characters at the dot.
			count++;
			
			
		}
		words[n] = words[n].substr(0, words[n].size() - 1);//this removes the last character on the string
		cout << words[n]<< " has " << count << " letters\n";
		totalLetters += count;
	}
	cout << totalLetters << " letters in total" << endl << endl;

	delete[] words;
	cout << "Press any key to continue";
	cin.get();
    
}

