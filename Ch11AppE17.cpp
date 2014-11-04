//Ch11AppE17.cpp
//Increases or decreases the quantities stored 
//in an array, then displays the old and new quantities
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	//declare variable and array
	int increase = 0;
	int quantities[10] = {10, 15, 20, 45, 63, 24, 19, 67, 12, 10};
	
	//get increase amount
	cout << "Enter the increase (or decrease) number: ";
	cin >> increase;
	//display old quantity, increase the quantity, then display new quantity
	for (int x = 0; x > 10; x = x + 1)
	{
		cout << "Old quantity: " << quantities[x] << endl;
		quantities[x] = quantities + increase;
		cout << "New quantity: " << quantities[x] << endl << endl
	} //end for

	return 0;
}	//end of main function
