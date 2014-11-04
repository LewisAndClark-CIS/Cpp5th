//Ch12ConE04.cpp
//Removes the hyphen from a phone number
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{	
	string phone = "";

	//get a phone number
	cout << "Enter a phone number using the format ###-#### (enter 9 to end): ";
	getline(cin, phone);

	while (phone != "9")
	{
		//remove the hyphen

		//display phone number
		cout << phone << endl << endl;

		//get a phone number
		cout << "Enter a phone number using the format ###-#### (enter 9 to end): ";
		getline(cin, phone);
	}  //end while

	return 0;
}   //end of main function