//Ch12ConE06.cpp
//Concatenates strings
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
	string city  = "";
	string state = "";
	string zip   = "";
	string cityStateZip = "";

	//get a city name
	cout << "Enter a city name (enter X to end): ";
	getline(cin, city);

	while (city != "X" && city != "x")
	{
		//get a state name
		cout << "Enter a state name: ";
		getline(cin, state);
		//get a zip code
		cout << "Enter a ZIP code: ";
		getline(cin, zip);

		//concatenate the city, a comma, a space, the state name,
		//two spaces, and the ZIP code

		//display the concatenated string
		cout << endl << cityStateZip << endl << endl;

		//get a city name
		cout << "Enter a city name (enter X to end): ";
		getline(cin, city);
	}  //end while

	return 0;
}   //end of main function