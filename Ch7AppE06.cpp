//Ch7AppE06.cpp
//Displays the number of vacation weeks due an employee
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int years  = 0;
		
	cout << "Enter the years employed: ";
	cin >> years;

	//display vacation weeks
	if (years == 0)
		cout << "Vacation weeks: 0" << endl;
	else if (years <= 5)
		cout << "Vacation weeks: 1" << endl;
	else if (years <= 10)
		cout << "Vacation weeks: 2" << endl;
	else cout << "Vacation weeks: 3" << endl;
	//end ifs

	return 0;
}   //end of main function