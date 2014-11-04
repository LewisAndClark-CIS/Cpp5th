//Ch8AppE07.cpp
//Calculates and displays bonus amounts
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	const double RATE = .1;
	double sales      = 0.0;
	double bonus      = 0.0;

	cout << "First sales amount: ";
	cin >> sales;

	do
	{

		bonus = sales * RATE;
		cout << "Bonus: $" << bonus;
		cout << endl << endl;

		cout << "Next sales amount: ";
		cin >> sales;
	} while (sales != -1.0);

	return 0;
}	//end of main function