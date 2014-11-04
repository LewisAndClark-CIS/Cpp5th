//Ch12Lab5.cpp
//Displays each character contained in a string
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{	
	char another = 'Y';
    string message = "";

	while (std::toupper(another) == 'Y')
	{
		cout << "Enter a message: ";
		getline(cin, message);

		for (int x = 0; x < message.length(); x += 1)
			cout << message.substr(x) << endl;
		//end for

		cout << endl << "Another message (Y/N)? ";
		cin >> another;
		cin.ignore(100, '\n');
	}  //end while

    return 0;
}   //end of main function