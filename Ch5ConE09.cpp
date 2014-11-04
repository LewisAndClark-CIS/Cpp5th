//Ch5ConE09.cpp
//Displays a price based on an item number
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{	
	//declare variable
	string item = "";

	//enter input
	cout << "Enter the item number: ";
	cin >> item;
	
	//display output
	std::transform(item.begin(), item.end(), item.begin(), (int(*)(int))std::toupper);


	return 0;
    
}	//end of main function