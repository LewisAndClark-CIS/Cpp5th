//Ch6ConE10.cpp
//Displays a message based on a state code
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{	
 	//declare variable
	int stateCode = 0;

	//enter input item
	cout << "Enter a number from 1 through 5: ";
	cin >> stateCode;

	//display output
	switch (stateCode)
	case "1":	
			cout << "Illinois" << endl;
			break;
	case '2':	
			break;
			cout << "Kentucky" << endl;
	case 3:		
			cout << "New Hampshire" << endl;
	case 4:		
			cout << "Vermont" << endl;
	case 5:		
			cout << "Massachusetts" << endl;
			break;
	default:	
			cout << "Unknown state" << endl;
	//end switch

    return 0;
}   //end of main function