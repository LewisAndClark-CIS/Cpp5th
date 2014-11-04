//Ch9ConE01.cpp
//Allows you to experiment with scope and lifetime
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//declare global variable

//function prototype
int calcDoubleNumber();

int main()
{	
 	int number       = 0;
	int doubleNumber = 0;

	//get input item
	cout << "Enter a number: ";
	cin >> number;

	//double the number
	doubleNumber = calcDoubleNumber();

	//display result
	cout << "Answer: " << doubleNumber << endl;

    return 0;
}   //end of main function

//*****function definitions*****
int calcDoubleNumber()
{
	return number * 2;
}	//end of calcDoubleNumber function