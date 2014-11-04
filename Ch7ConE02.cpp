//Ch7ConE02.cpp
//Displays the character entered by the user
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	char more = ' ';

	//get first character
	cout << "Enter a character. (Enter N or n to stop.): ";
	cin >> more;

	//perform loop 
	while
	{
		cout << "You entered the character " << more << endl;
		cout << "Enter a character. (Enter N or n to stop.): ";
		cin >> more;
	}//end while

	cout << "Loop stopped because you entered the character " << more << endl;

	return 0;
}   //end of main function