//Ch8AppE10.cpp
//Displays the following pattern of numbers
//2 4 6
//8 10 12
//14 16 18
//20 22 24
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int number = 0;

	for (int outer = 1; outer < 4; outer = outer + 1)
		for (int inner = 1; inner < 5; inner = inner + 1)
		{
			number = number + 2;
			cout << number;
		}	//end for inner
		cout << endl;
	//end for outer

	return 0;
}   //end of main function
