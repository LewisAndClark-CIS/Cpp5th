//Ch7ConE01.cpp
//Displays the number entered by the user
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int number = 0;

	//get first number
	cout << "Enter a number. (Enter a negative number to stop.): ";
	cin >> number;

	//perform loop 
	while 
	{
		cout << "You entered the number " << number << endl;
		cout << "Enter a number. (Enter a negative number to stop.): ";
		cin >> number;
	}	//end while

	cout << "Loop stopped because you entered the number " << number << endl;
    
	return 0;
}   //end of main function