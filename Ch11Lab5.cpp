//Ch11Lab5.cpp
//Stores names in a two-dimensional array
//The first name is stored in the first column
//The last name is stored in the second column
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{	
	//declare array
	string names[4, 2] = {""};
  
	//get first and last names
	for (int x = 0; x < 4; x += 1)
	{
		cout << x + 1 << "  First name: ";
		getline(cin, names[x, 0]);
		cout << x + 1 << "  Last name: ";
		getline(cin, names[x, 1]);
		cout << endl;
	}  //end for

	//display contents of array
	cout << endl;
	for (int x = 0; x < 4; x += 1)
		cout << names[x][0] << " " 
			<< names[x][1] << endl;
	//end for

    return 0;
}   //end of main function