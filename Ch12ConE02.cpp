//Ch12ConE02.cpp
//Compares two strings, then displays an appropriate message
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
	string character1 = "";
	string character2 = "";
	int compareValue  = 0;

	//get the first one-character string
	cout << "Enter one character (enter 99 to end): ";
	getline(cin, character1);
	
	while (character1 != "99")
	{
		//get the second one-character string
		cout << "Enter another character: ";
		getline(cin, character2);

		if (character1.length() == 1 && character2.length() == 1)
		{
	

		}
		else 
			cout << "Please enter two one-character strings." << endl;
		//end if

		//get the first one-character string
		cout << "Enter one character (enter 99 to end): ";
		getline(cin, character1);
	}  //end while

	return 0;
}   //end of main function