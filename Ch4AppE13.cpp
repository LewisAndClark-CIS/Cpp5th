//Ch4AppE13.cpp
//Calculates and displays the average of three sales amounts
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
    //declare variables
	double region1Sales = 0.0;
	double region2Sales = 0.0;
	double region3Sales = 0.0;
	int avgSales     = 0.0;

	//enter input items
	cout << "Enter region 1 sales: ";
	cin >> region1Sales;
	cout << "Enter region 2 sales: ";
	cin >> region2Sales;
	cout << "Enter region 3 sales: ";
	cin >> region3Sales;

	//calculate average sales
	avgSales = region1Sales + region2Sales + region3Sales / 3;

	//display average sales
	cout << fixed << setprecision(2);
	cout << "Average sales: " << avgSales << endl;

    return 0;

}   //end of main function

