//Gross Pay.cpp
//Displays the gross pay for salaried
//and hourly employees

#include <iostream>
#include <iomanip>
//include GrossPay.h header file

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main()
{    
	//create GrossPay object

	//declare variables
	double yearSalary = 0.0;
	double hours      = 0.0;
	double payRate    = 0.0;
	
	cout << fixed << setprecision(2);
	
	cout << "Salaried gross pay" << endl;
	//display gross pay for three salaried employees


	cout << endl << "Hourly gross pay" << endl;
	//display gross pay for two hourly employees

	
	return 0;
}   //end of main function