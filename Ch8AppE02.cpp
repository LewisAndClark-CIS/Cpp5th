//Ch8AppE02.cpp
//Calculates and displays each region's
//total sales amount
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int sales       = 0;
	int totRegSales = 0;

	for (int region = 1; region < 3; region += 1)
	{
		cout << "First sales amount for Region " 
			<< region << ": ";
        cin >> sales;

		do
		{
			totRegSales = totRegSales + sales;
			cout << "Next sales amount for Region " 
				<< region << ": ";
			cin >> sales;
		}  while (sales > 0);

		cout << endl << "Region " << region 
			<< " sales: $" << totRegSales << endl << endl;
	    totRegSales = 0;

	}  //end for

	cout << "End of program" << endl;
	return 0;
}	//end of main function