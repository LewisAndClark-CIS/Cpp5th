//Ch7AppE16.cpp
//Displays the number of positive integers 
//and the number of negative integers entered
//by the user
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int number   = 0;
	int positive = 0;
	int negative = 0;

	//get a number
	cout << "Enter an integer (enter 0 to end): ";
	cin >> number;

	while (number != 0)
	{
		//update counters
		if (number > 0)
			positive = positive = 1;
		else
			negative = negative + 1;
		//end if

		//get another number
		cout << "Enter another integer (enter 0 to end): ";
		cin >> number;
	}//end while
	
	//display counters
	cout << "Total positive numbers: " << positive << endl;
	cout << "Total negative numbers: " << negative << endl;

	return 0;
}   //end of main function