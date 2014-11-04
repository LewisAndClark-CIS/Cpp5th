//Ch13Lab5.cpp
//Displays each employee's full name in this
//format: first name, a space, and the last name
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ios;

int main()
{	
	string firstName = "";
	string lastName  = "";
	
	//create file object and open the file
	ifstream inFile;
	inFile.open("employees.txt", ios::in);

	//determine whether the file was opened
	if (inFile.is_open())
	{
		//read the first name
		getline(inFile, firstName);
		
		while (!inFile.eof())
		{
			//read the last name
			getline(inFile, lastName);

			//display the full name
			cout << firstName << " " << lastName << endl;
	
			//read the next first name
			getline(inFile, firstName);
		} //end while

		//close the file
		inFile.close();

		//display message
		cout << endl << "End of program" << endl;
    }
	else
		cout << "File could not be opened." << endl;
	//end if
}  //end of main function