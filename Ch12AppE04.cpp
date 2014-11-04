//Ch12AppE04.cpp
//Allows the user to guess a letter chosen
//randomly by the computer
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{	
 	//declare variables
	string letters      = "abcdefghijklmnopqrstuvwxyz";
	string randomLetter = "";



	//get the user's guess
	cout << "Enter your guess: ";
	getline(cin, guess);


	
	return 0;
}   //end of main function