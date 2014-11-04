//Ch7Lab5.cpp
//Calculates and displays the average price
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
	int numPrices     = 0;    //counter
	double price      = 0.0;
	double totalPrice = 0.0;  //accumulator
	double avgPrice   = 0.0;

	cout << "Price: ";
	cin >> price;

	while (price >= 0.0)
	{    
		numPrices = numPrices + 1;    
		totalPrice = totalPrice + price;    
		cout << "Next price: ";    

	} //end while

	if (totalPrice > 0.0) 
		avgPrice = totalPrice /        
			static_cast<double>(numPrices);    
	else    
		avgPrice = 0.0;
	// end if

	cout << fixed << setprecision(2) << endl;
	cout << "Average: " << avgPrice << endl;

	return 0;
}	//end of main function