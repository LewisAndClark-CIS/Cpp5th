//Ch12AppE11.cpp
//Displays the price based on the
//last character in the customer number
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
 	string custNum = "";
	string letter  = "";

	//get the customer number
	cout << "Enter the customer number (X to end): ";
	getline(cin, custNum);
	std::transform(custNum.begin(), custNum.end(), custNum.begin(), (int(*)(int))std::toupper);

	while (custNum != "X")
	{
		letter = custNum.substr(custNum.length() - 1);
		if (letter = "A")
			cout << "$25.67" << endl;
		else if (letter = "W")
			cout << "28.54" << endl;
		else if (letter = "X")
			cout << "31.50" << endl;
		else
			cout << "Invalid customer number." << endl;
		//end ifs

		//get the customer number
		cout << "Enter the customer number (X to end): ";
		getline(cin, custNum);
		std::transform(custNum.begin(), custNum.end(), custNum.begin(), (int(*)(int))std::tolower);
	}	//end while

	return 0;
}   //end of main function