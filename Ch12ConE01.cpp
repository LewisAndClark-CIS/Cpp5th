//Ch12ConE01.cpp
//Displays one or more words and a row of hyphens
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
	string words   = "";
	string hyphens = "";

	//get one or more words
	cout << "Enter one or more words (X to end): ";
	getline(cin, words);

	while (words != "X" && words != "x")
	{
		//assign appropriate number of hyphens

		cout << words << endl;
		cout << hyphens << endl;

		//get one or more words
		cout << "Enter one or more words (X to end): ";
		getline(cin, words);
	}  //end while

	return 0;
}   //end of main function
