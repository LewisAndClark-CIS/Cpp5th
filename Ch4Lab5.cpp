//Ch4Lab5.cpp
//Calculates and displays a bonus
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;

int main()
{
	//declare variables
    double sales = 0.0;
    double rate  = 0.0;
	double bonus = 0.0;
	string name  = "";

    //enter input items
    cout << "Sales amount: ";
    cin >> sales;
	cout << "Bonus rate: ";
    cin >> rate;
	cout << "Salesperson's name: ";
    getline(cin, name);

    //calculate bonus
	bonus = sales * rate;

	//display output
	cout << fixed << setprecision(2);
	cout << name << ", your bonus is $";
	cout << bonus << endl;

	return 0;
}	//end of main function