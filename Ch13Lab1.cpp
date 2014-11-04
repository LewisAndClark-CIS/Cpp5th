//Ch13Lab1.cpp
//Saves state names and capitals in a 
//sequential access file
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ofstream;
using std::ios;

int main()
{	
	string state   = "";
	string capital = "";

	//create file object and open the file
	ofstream outFile;
	outFile.open("statecapitals.txt", ios::out);

	//determine whether the file is open
	if (outFile.is_open())
	{
		//get state name
		cout << "Enter a state name (X to stop): ";
		getline(cin, state);
		std::transform(state.begin(), state.end(), 
			state.begin(), (int(*)(int))std::toupper);

		while (state != "X")
		{
			//get the capital
			cout << "Enter the capital: ";
			getline(cin, capital);
			std::transform(capital.begin(), 
				capital.end(), capital.begin(), (int(*)(int))std::toupper);

			//write the record to the file
			outFile << state << '#' << capital << endl;

			//get another state name
			cout << "Enter a state name (X to stop): ";
			getline(cin, state);
			std::transform(state.begin(), state.end(), 
				state.begin(), (int(*)(int))std::toupper);
		}  //end while

		//close the file
		outFile.close();
	}
	else
		cout << "The file could not be opened." << endl;
	//end if

    return 0;
}   //end of main function