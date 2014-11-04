//Ch13ConE13.cpp
//Saves the inventory number, quantity,  
//and price in a sequential access file
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ofstream;
using std::ios;

int main()
{	
	string name  = "";
	int quantity = 0;

	//create file object and open the file
	ofstream outFile;
	outFile.open("items.txt", ios::out);

	//determine whether the file was opened
	if (outFile.is_open())
	{
		//get the name and quantity, then write each to the file
		cout << "Enter the item name (X to end): ";
		getline(cin, name);
		while(name != "X" && name != "x")
		{
			cout << "Enter the quantity: ";
			cin >> quantity;
			cin.ignore();
			cout << "Enter the item name (X to end): ";
			getline(cin, name);
		}  //end while

		//close the file
		outFile.close();
	}
	else
		cout << "The file could not be opened." << endl;
	//end if
		
    return 0;
}   //end of main function