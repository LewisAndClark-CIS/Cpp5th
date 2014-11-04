//Ch11Lab1.cpp
//Calculates the total company sales
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::endl;

int main()
{	
    //declare variable and arrays
    int total = 0;
	int domestic[6] = {12000, 45000, 32000, 
					   67000, 24000, 55000};
	int international[6] = {10000, 56000, 42000, 
							23000, 12000, 34000};

	//accumulate sales
	for (int x = 0; x < 6; x = x + 1)
		total = total + domestic[x] + international[x];
	//end for

	//display total sales
	cout << "Total company sales: $" << total << endl;

    return 0;
}   //end of main function