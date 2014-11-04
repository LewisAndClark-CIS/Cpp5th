//Ch8ConE07.cpp
//Displays the total sales amount
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	//declare variables
	int sum	       = 0;
	int department = 0;

	while (department <= 2)
		for (int sales = 100; sales <= 1000; sales = sales + 100)
		{
			sum = sum + sales;
			department = department + 1;
		}	//end for
	//end while

	cout << "Sum: $" << sum << endl;
	
	return 0;
}   //end of main function