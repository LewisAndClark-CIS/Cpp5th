//Ch10Lab1.cpp
//Converts American dollars to British pounds,
//or Mexican pesos, or Japanese yen
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

//function prototypes
void displayMenu();
void convertDols(double, double, double &);

int main()
{	
    //declare constants and variables
	const double BRITISH_RATE  = .571505;
	const double MEXICAN_RATE  = 10.7956;
	const double JAPANESE_RATE = 112.212;
    int choice           = 0;
	double origDols      = 0.0;
    double convertedDols = 0.0;
    double rate          = 0.0;

	//display output in fixed-point notation
    //with two decimal places
    cout << fixed << setprecision(2);

	//get menu choice
	displayMenu();
	cout << "Enter 1, 2, 3, or 4: ";
	cin >> choice;

	while (choice > 0 && choice < 4)
	{
		//get dollars to convert
		cout << "Number of American dollars: ";
		cin >> origDols;

		//assign rate
	    if (choice == 1)			//British
			rate = BRITISH_RATE;
		else if (choice == 2)		//Mexican
			rate = MEXICAN_RATE;
		else 
			rate = JAPANESE_RATE;	//Japanese
		//end ifs

		convertDols(origDols, rate, convertedDols);
		cout << "-->" << convertedDols << endl << endl;

		//get menu choice
		displayMenu();
		cout << "Enter 1, 2, 3, or 4: ";
		cin >> choice;
	}	//end while

    return 0;
}   //end of main function

//*****function definitions*****
void displayMenu()
{
	cout << "1 British pounds" << endl;
	cout << "2 Mexican pesos" << endl;
	cout << "3 Japanese yen" << endl;
	cout << "4 Stop program" << endl;
}	//end of displayMenu function

void convertDols(double orig, double r, double &newDols)
{
	newDols = orig * r;
}   //end of convertDols function