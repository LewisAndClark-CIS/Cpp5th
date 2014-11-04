//Ch5Lab1.cpp 
//Calculates and displays a commission
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;
using std::fixed;
using std::setprecision;
using std::transform;

int main()
{	
	//declare variables
	string state      = "";
	double sales      = 0.0;
	double commission = 0.0;

	//get input items
	cout << "Enter the state name: ";
	getline(cin, state);
	cout << "Enter the sales amount: ";
	cin >> sales;

	//convert state to uppercase
	std::transform(state.begin(), state.end(), 
		      state.begin(), (int(*)(int))std::toupper);

	//calculate commission
	if (state == "NEW YORK" || state == "NEW JERSEY")
		commission = .02 * sales;
	else
		commission = .03 * sales;
	//end if

	//display commission
	cout << fixed << setprecision(2);
	cout << "The commission is $" << commission << endl;

	return 0;
 }  //end of main function
