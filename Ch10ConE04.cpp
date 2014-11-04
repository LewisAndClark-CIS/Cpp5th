//Ch10ConE04.cpp
//Calculates and displays the sum of two numbers
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//function prototypes
void getNumber(int &)
void calcSum(int, int, int)

int main()
{	
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	
	//enter input items
	getNumber(&num1);
	getNumber(&num2);

	//calculate and display sum
	calcSum(num1, num2, num3);
	cout << "Sum: " << num3 << endl;

    return 0;
}   //end of main function

//*****function definitions*****
void getNumber(int &num)
{
	cout << "Enter a number: ";
	cin >> num;
}   //end of getNumber function

void calcSum(int n1, int n2, int n3)
{
	n3 = n1 + n2;
}   //end of calcSum function

