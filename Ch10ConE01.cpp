//Ch10ConE01.cpp
//Allows you to experiment with passing by value 
//and by reference
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//function prototype
void getAge(int);

int main()
{	
	//declare variable
	int age = 0;

	//call function to get the age
	getAge(age);

	//display the age
	cout << "You are " << age << " years old." << endl;

	return 0;
 
}   //end of main function

//*****function definitions*****
void getAge(int years)
{   
	cout << "Enter an age: ";
	cin >> years;
}  //end of getAge function
