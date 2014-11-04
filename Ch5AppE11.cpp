//Ch5AppE11.cpp
//Displays a message based on the age 
//entered by the user
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{	
	//declare variables
	string name = "";
	int age     = 0;

	//enter input
	cout << "Enter your name: ";
	getline(cin,name);
	cout << "Enter your age: ";
	cin >> age;

	//display name and age
	if age > 21
		cout << name << " is over 21." << endl;
	else
		cout << name << " is not over 21." << endl;
	//end if
	
	return 0;
}	//end of main function