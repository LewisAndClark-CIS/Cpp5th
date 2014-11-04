//Ch10AppE09.cpp
//Calculates and displays an employee's gross pay
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;

//function prototypes
void enterItems();
void calcGross(double, double);
void displayGross(double):

int main()
{	
	//declare variables
	double hours   = 0.0;
	double payRate = 0.0;
	double gross   = 0.0;

	//enter input values
	enterItems();

	//calculate gross pay
	calcGross(hours, payRate);

	//display output item
	cout << fixed << setprecision(2);
	displayGross(gross);

    return 0;
}   //end of main function

//*****function definitions*****
void enterItems()
{
	cout << "Enter hours: ";
	cin >> hrs;
	cout << "Enter pay rate: ";
	cin >> rate;
} //end of enterItems function

void calcGross(double hrs, double rate)
{
	grossPay = hrs * rate;
} //end of calcGross function

void displayGross(double grossPay)
{
	cout << "Gross Pay: $" << grossPay << endl;
} //end of displayGross function