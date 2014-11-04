//Ch5AppE10.cpp
//Displays a message based on a sales amount
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{	
	//declare constant and variables
	const double RATE = .1;
	double sales      = 0.0;
	double bonus      = 0.0;

	//enter input
	cout << "Enter the sales amount: ";
	cin >> sales;

	//display output
	if (sales > 10000)
		bonus = sales * RATE;
		cout << "Bonus: " << bonus << endl;
	else
		cout << "Sorry, you do not get a bonus." << endl;
	//end if
	
	return 0;
}	//end of main function