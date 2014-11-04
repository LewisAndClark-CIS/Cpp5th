//Ch13AppE06.cpp
//Displays the contents of a sequential access file
//Created/revised by <your name> on <current date>

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ios;

int main()
{	
	//declare variables
	string name = "";
	int num1    = 0;
	int num2    = 0;

	//create file object and open the file
	ifstream inFile;
	inFile.open("records.txt", ios::in);

	//determine whether the file was opened
	if (inFile.is_open())
	{
		//read a record
		getline(inFile, name);
		inFile >> num1;
		inFile >> num2;
	
		while (inFile.eof())
		{
			//display the record
			cout << name << ", " << num1 << ", " << num2 << endl;
			//read another record
			getline(inFile, name);
			inFile >> num1;
			inFile >> num2;
		} //end while

		//close the file
		inFile.close();
	}
	else
		cout << "The file could not be opened." << endl;
	//end if
	
    return 0;
}   //end of main function