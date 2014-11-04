//Ch12ConE03.cpp
//Searches a string
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{	
    //declare variables
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	string letters  = "";
	int location    = 0;

	//get one or more letters
	cout << "Enter one or more letters (enter 9 to end): ";
	getline(cin, letters);

	while (letters != "9")
	{
		//find letters

		//display location
		cout << "Beginning location: " << location << endl << endl;

		//get one or more letters
		cout << "Enter one or more letters (enter 9 to end): ";
		getline(cin, letters);

	}  //end while

	return 0;
}  //end of main function