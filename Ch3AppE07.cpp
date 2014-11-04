//Ch3AppE07.cpp
//Calculates and displays the sales 
//discount and new price
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{	
	//declare variables	
	double original = 0.0;	
	double rate     = 0.0;	
	double discount = 0.0;	
	double sale     = 0.0;	
	
	//enter input items	
	cout << "Original price: ";	
	cin >> original;	
	cout << "Discount rate: ";	
	cin >> rate;	
	
	//calculate discount and new price	
	discount = sale * rate;	
	sale = original - discount;	
	
	//display discount and new price	
	cout << "Sales discount: " << discount << endl;	
	cout << "New sales price: " << sale << endl;	
	
	return 0;
}	//end of main function