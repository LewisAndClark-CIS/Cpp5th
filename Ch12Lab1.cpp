//Ch12Lab1.cpp
//Removes parentheses and hyphens from a phone number
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{	
    string phone       = "";
	string currentChar = "";
	int numChars       = 0;
	int subscript      = 0;

	//get phone number
	cout << "Enter a phone number: ";
	cin >> phone;

	//determine number of characters
	numChars = static_cast<int>(phone.length());

	//remove any parentheses or hyphens
	while (subscript < numChars)
	{
		currentChar = phone.substr(subscript, 1);
		if (currentChar == "(" 
			|| currentChar == ")"
			|| currentChar == "-")
		{
			phone.erase(subscript, 1);
			numChars = numChars - 1;
		}
		else
			subscript = subscript + 1;
		//end if
	}	//end while

	//display phone number
	cout << "Phone number: " << phone << endl;

    return 0;
}   //end of main function