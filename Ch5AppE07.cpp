//Ch5AppE07.cpp
//Displays the result of dividing the larger 
//number by the smaller number
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	//declare variables
	int num1        = 0;
	int num2        = 0;
	double quotient = 0.0;

	//enter numbers
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;

	//calculate quotient by dividing larger 
	//number by smaller number

	//display quotient
	cout << "The quotient obtained by dividing " 
		<< num1 << " by " << num2 << " is " 
		<< quotient << endl;
	
	return 0;
}   //end of main function
