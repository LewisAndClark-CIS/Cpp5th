//Ch7AppE05.cpp
//Displays the price of a concert ticket
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	char location = ' ';
	
	//enter input data
	cout << "Enter the seat location (B, P, L): ";
	cin >> location;
	location = std::toupper(location);

	//display ticket price
	if (location == 'B')
		cout << "Ticket price: $75" << endl;
	else if (location == 'P')
		cout << "Ticket price: $30" << endl;
	else if (location == 'L')
		cout << "Ticket price: $21" << endl;
	else cout << "Invalid location" << endl;
	//end ifs
    
	return 0;
}   //end of main function