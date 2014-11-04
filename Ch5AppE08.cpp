//Ch5AppE08.cpp
//Displays a shipping charge
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
	string state   = "";
	int shipCharge = 0;

	//enter input item
	cout << "Enter the state name: ";
	getline(cin, state);

	//assign shipping charge
	
	//display shipping charge
	cout << "Shipping charge: " << shipCharge << endl;
    
	return 0;
}   //end of main function