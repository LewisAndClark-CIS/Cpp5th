//Ch6AppE09.cpp
//Calculates and displays a commission
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main()
{
    //declare constants and variables
	const double RATE1 = .02;
	const double RATE2 = .05;
	double sales       = 0.0;
	double commission  = 0.0;
	
	//get input item
	cout << "Enter the sales amount: "; 
	cin >> sales; 

	//calculate commission
	if (sales <= 100000.0)
		commission = sales * RATE1;
	else
		commission = sales * RATE2;
	//end if

	//display commission
	cout << fixed << setprecision(2);
	cout << "Commission: $" << commission << endl;

	return 0;
}	//end of main function
