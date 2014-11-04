//Ch8Lab5.cpp
//Calculates and displays the total
//sales for the company
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int sales      = 0;
	int totalSales = 0;  //accumulator

	for (int store = 1, store < 3, store = store + 1)
	{
		cout << "First sales amount for store " 
			<< store << " (negative number to stop): ";
		cin >> sales;
		do
		{
			totalSales = totalSales + sales;    
			cout << "Next sales amount for store " 
				<< store << " (negative number to stop): ";
			cin >> sales;
		} while (sales >= 0)
		cout << endl;
	}  //end for

	cout << "Total: $" << totalSales << endl;
	return 0;
}	//end of main function