//Ch14ConE01.cpp
//Calculates and displays a new salary
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main()
{	
	//create Employee object

	//declare variables
	string name = "";
	double pay  = 0;
	double rate = 0.0;

	//get name, salary, and raise percentage
	cout << "Employee's name: ";
	getline(cin, name);
	cout << "Employee's current salary: ";
	cin >> pay;
	cin.ignore(100, '\n');
	cout << "Raise rate: ";
	cin >> rate;
	cin.ignore(100, '\n');

	//assign name and salary to the Employee object

	//use the Employee object to display the name and current salary

	//use the Employee object to calculate the new salary
	
	//use the Employee object to display the new salary
	
}   //end of main function