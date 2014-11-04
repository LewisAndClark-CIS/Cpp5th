//Ch14Lab5.cpp
//Displays an item name and an inventory quantity
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>


using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	//declare object
	Inventory itemObj;

	//declare variables
	string itemName = "";
	int amount      = 0;

	//get item name and inventory amount
	cout << "Enter item name: ";
	getline(cin, itemName);
	cout << "Enter amount in inventory: ";
	cin >> amount;
	
	//assign and display item values
	itemObj.setItem(itemName, amount);
	cout << "Name: " << itemObj.getName() << endl;;
	cout << "Amount: " << itemObj.getQuantity() << endl;

	return 0;
} //end of main function