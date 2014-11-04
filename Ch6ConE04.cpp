//Ch6ConE04.cpp
//Displays a seminar fee based on membership 
//status and age
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{	
 	//declare variables
	char memberStatus  = ' ';
	int age            = 0;
	int fee            = 0;

	//enter status
	cout << "Membership status (M for member or N for non-member): ";
	cin >> memberStatus;
	
	//assign seminar fee
			
	//display output
	cout << "Fee: " << fee << endl;

    return 0;
}   //end of main function