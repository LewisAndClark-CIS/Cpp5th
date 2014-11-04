//Ch14ConE02.cpp
//Displays a formatted date
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>
//include the FormattedDate.h header file

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{	
    //create a FormattedDate object
	
	//declare variables
	string hireMonth = "";
	string hireDay   = "";
	string hireYear  = "";

	//get month, day, and year
	cout << "Enter the month number: ";
	cin >> hireMonth;
	cout << "Enter the day number: ";
	cin >> hireDay;
	cout << "Enter the year number: ";
	cin >> hireYear;

	//use the FormattedDate object to set the date
	
	//display the formatted date
	cout << "Employee hire date: " 
		<< endl;

    return 0;
}   //end of main function