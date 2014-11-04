//Ch7ConE09.cpp
//Displays the quantity entered by the user
//this program results in an endless (infinite) loop
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int quantity = 0;

	//display quantity
	while (quantity >= 0)
		cout << quantity << endl;
	//end while
    
	return 0;
}   //end of main function