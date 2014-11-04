//Ch12ConE05.cpp
//Accesses the characters in a string
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{	
    //declare variables
	string partNum = "";
	string item    = "";
	string color   = "";

	//get a part number
	cout << "Enter a five-character part number (enter X to end): ";
	getline(cin, partNum);

	while (partNum != "X" && partNum != "x")
	{
	
		//get a part number
		cout << "Enter a five-character part number (enter X to end): ";
		getline(cin, partNum);

	}  //end while

	return 0;
}   //end of main function