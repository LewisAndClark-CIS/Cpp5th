//Ch10AppE10.cpp
//Calculates and displays a bonus amount
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;

//function prototypes
void enterItems(double, double);
void calcAndDisplayBonus(double, double);

int main()
{	
	//declare variables
	double sales     =  0.0;
	double bonusRate =  0.0;

	//enter input values
	enterItems(sales, bonusRate);

	//calculate and display bonus
	cout << fixed << setprecision(2);
	calcAndDisplayBonus(sales, bonusRate);

    return 0;
}   //end of main function

//*****function definitions*****
void enterItems(double salesAmt, double rate)
{
	cout << "Enter sales: ";
	cin >> salesAmt;
	cout << "Enter bonus rate: ";
	cin >> rate;
} //end of enterItems function

void calcAndDisplayBonus(double salesAmt, double rate)
{
	cout << "Bonus: $" << salesAmt * rate << endl;
} //end of calcAndDisplayBonus function
