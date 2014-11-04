//Ch14AppE05.cpp
//Updates and displays a date
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	//declare a MyDate object
	MyDate today;

	//declare variables
	int todayMonth = 0;
	int todayDay   = 0;
	int todayYear  = 0;

	//get month,day, and year from user
	cout << "Enter the month (1-12): ";
	cin >> todayMonth;
	cout << "Enter the day (1-31): ";
	cin >> todayDay;
	cout << "Enter the year: ";
	cin >> todayYear;

	//assign values to private data members
	today.setDate(todayMonth, todayDay, todayYear);

	//display values stored in private data members
	cout << endl << "Today is ";
	today.displayDate();
	cout << "." << endl;

	//update values stored in private data members, then
	//display the updated values
	today.updateDate();
	cout << "Tomorrow is ";
	today.displayDate();
	cout << "." << endl;

	return 0;
} //end of main function