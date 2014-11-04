//Ch6Lab1.cpp
//Converts American dollars to British pounds,
//Mexican pesos, or Japanese yen
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main()
{	
	//declare constants and variables
	double BRITISH_RATE     = .571505;
	double MEXICAN_RATE     = 10.7956;
	double JAPANESE_YEN     = 112.212;
    int choice              = 0;
    double americanDollars  = 0.0;
    double convertedDollars = 0.0;

    //get input items
    cout << "1 British pounds" << endl;
    cout << "2 Mexican pesos" << endl;
    cout << "3 Japanese yen" << endl;
    cout << "Enter 1, 2, or 3: ";
    cin >> choice;
	cout << "Enter number of American dollars: ";
	cin >> americanDollars;
	
	//display output in fixed-point notation
	//with two decimal places
	cout << fixed << setprecision(2) << endl;

	//convert American dollars
	if (choice == 1)
	{
		convertedDollars = americanDollars * BRITISH_RATE;
		cout << "British pounds: " 
			 << convertedDollars << endl;
	}
	else if (choice == 2)
	{
		convertedDollars = americanDollars * MEXICAN_RATE;
		cout << "Mexican pesos: " 
			 << convertedDollars << endl;
	}
	else 
	{ 
		convertedDollars = americanDollars * JAPANESE_YEN;
		cout << "Japanese yen: " 
			 << convertedDollars << endl;
	}   //end ifs

    return 0;
}   //end of main function