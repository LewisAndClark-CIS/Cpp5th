//Ch7ConE04.cpp
//Displays the total sales
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
	char anotherSale = ' ';
	int salesAmount  = 0;
	int totalSales   = 0;

	cout << "Do you want to enter a sales amount (Y or N)? ";
	cin >> anotherSale;

	//perform loop 
	while
	{
		cout << "Enter the sales amount: ";
		cin >> salesAmount;
		totalSales = totalSales + salesAmount;
		cout << "Do you want to enter a sales amount (Y or N)? ";
		cin >> anotherSale;
	}//end while

	cout << fixed << setprecision(0);
	cout << "Total sales: $" << totalSales << endl;
    
	return 0;
}   //end of main function