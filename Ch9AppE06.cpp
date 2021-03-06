//Ch9AppE06.cpp
//Displays a bonus amount
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

//function prototype
double calcBonus(double, double);

int main()
{
	char code    = ' ';
	double sales = 0.0;
	double bonus = 0.0;
	
	cout << "Enter the salesperson's code (A or B): ";
	cin >> code;
	code = std::toupper(code);
	cout << "Enter the sales: ";
    cin >> sales;

	if (code == 'A')
	{
		double rate = 0.0;
		cout << "Enter the bonus rate in decimal form: ";
		cin >> rate;
		bonus = calcBonus(sales, rate);
	}
	else if (code == 'B')
		bonus = calcBonus(sales);
	else
	{
		cout << "Invalid code" << endl;
		bonus = 0.0;
	} //end ifs
	
	cout << fixed << setprecision(2) <<
		"Bonus: $" << bonus << endl;
	return 0;
}	//end of main function

//*****function definitions*****
double calcBonus(double dollars, double rate)
{
    return dollars * rate;
}   //end of calcBonus function