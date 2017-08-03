//***********************************************************************
// Name: Olmer Chavarria
// Date: 12/02/2016
// Lab: 14
// Description:This program demonstrates the use of the class <fstream>  
///////////////to create and write to files in the os using an ofstream object.
///////////////It also uses the function "_strtime_s()" to obtaint a time stamp.
//***********************************************************************


#include "stdafx.h"
#include <string>
#include <iostream>
#include <fstream>
#include <time.h>
using namespace std;
class Log 
{
private:
	int counter;                             //KEEPS TRACK OF THE NUMBER OF ENTRIES BY THE OBJECT.
	ofstream out;
	char timestamp[9];                       // ARRAY TO WRITE THE TIME STAMP ON.
public:
	Log(string name) 
	{
		out.open(name, ios::app);            //CREATES OR OPENS A FILE FOR WRITING
	}                                        //IT USES THE SECOND ARGUMENT ios::app TO APPEND TO THE FILE AND TO AVOID WIPING PREVIOUS CONTENT.
	~Log() 
	{
		out.close();                         //CLOSES THE FILE.
    }
	void Entry(string message) 
	{
		if (out.is_open()) 
		{
			_strtime_s(timestamp, 9);        //WRITES THE TIME STAMP INTO THE char ARRAY.
			out << timestamp<<" "<< message; //WRITES THE timestamp AND message INTO THE FILE.
			counter++;
		}
		else 
		{
			cout << "unable to open file \n";
		}
	}
	void displayCount() 
	{
        cout << "Number Of Entries: " << counter << endl; //DISPLAYS THE NUMBER OF ENTRIES.
	}

};

int main()
{
    Log log("log.txt");

	log.Entry("\"Hello world 1\"\n");
	log.Entry("\"Hello world 2\"\n");
	log.Entry("\"Hello world 3\"\n");

	log.displayCount();    
	cin.get();
	
    return 0;
}

