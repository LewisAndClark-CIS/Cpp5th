//Ch10ConE03.cpp
//Displays the name entered by the user
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{	
  	string name = "";
	getName(name);
	cout << "Your name is " << name << "." << endl;
	
    return 0;
}   //end of main function

//*****function definitions*****
void getName(string inputName)
{
	cout << "Enter your name: ";
	getline(cin, inputName);
}   //end of getName function