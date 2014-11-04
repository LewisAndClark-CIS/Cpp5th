//Ch6Lab5.cpp
//Calculates an item's new price, then
//displays the item's code, name, and new price
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main()
{
    //declare variables
	int code        = 0;
	double oldPrice = 0.0;
	double newPrice = 0.0;
	string item     = "";

	//get input items
	cout << "Item code (1 through 3 only): "; 
	cin >> code;
	cout << "Old price: "; 
	cin >> oldPrice;

	if (code == 1)
	{
		newPrice = oldPrice * 1.1;
		item = "Shirt";
	}
	else if (code == 2)
	{
		newPrice = oldPrice * 1.5;
		item = "Blouse";
	}
	else if (code == 3)
		newPrice = oldPrice * .9;
		item = "Gloves";
	//end ifs

	//display code, item, and new price
	cout << fixed << setprecision(2) << endl;
	cout << "Code: " << code << endl;
	cout << "Item: " << item << endl;
	cout << "New price: $" << newPrice << endl;
	
	return 0;
}	//end of main function