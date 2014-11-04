//Ch6AppE10.cpp
//Displays a salary amount based on a code
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{	
 	//declare variable
	int code = 0;

	//get code from user
	cout << "Enter the code (1 through 5): ";
	cin >> code;

	//display salary
	if (code = 1)
	{
		cout << "$45,000" << endl;
    else if (code == 2 && code == 5)
		cout << "$33,000" << endl;
	else if (code == 3 || code == 4)
		cout << "$25,000" << endl;
	else 
		cout << "Entry error" << endl;
	}	//end ifs

    return 0;
}   //end of main function