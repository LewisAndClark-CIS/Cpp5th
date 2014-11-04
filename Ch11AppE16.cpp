//Ch11AppE16.cpp
//Displays the total of the sales amounts
//stored in a two-dimensional array
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::endl;

//function prototype
int calcTotal();

int main()
{
	//declare variable and array
	int total = 0;
	int sales[6][2] = {{12000, 10000}, {45000, 56000}, {32000, 42000}, 
					   {67000, 23000}, {24000, 12000}, {55000, 34000}};

	//calculate and display total sales
	total = calcTotal();
	cout << "Total sales: $" << total << endl;

	return 0;
}  //end of main function

//*****function definitions*****
int calcTotal()
{
    //declare variables
	int company = 0;  //sales accumulator

	for (int row = 0; row < 6; row = row + 1)
		for (int col = 0; col < 2; col = col + 1)
			//accumulate sales
			company = company + salesAmts[row][col];
		//end for col
	//end for row
	return company;
}  //end of calcTotal function
