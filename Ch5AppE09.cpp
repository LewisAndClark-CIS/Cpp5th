//Ch5AppE09.cpp
//Displays a message based on the sales amount
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{	
	//declare variable
	int sales = 0;

	//enter input
	cout << "Enter the sales amount: ";
	cin >> sales;

	//display output
	if (sales <= 0)
		cout << "Great job!" << endl;
	//end if
	
	return 0;
}	//end of main function