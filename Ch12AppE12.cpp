//Ch12AppE12.cpp
//Validates a phone number
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{	
	const string lengthMsg = "Incorrect length";
	const string hyphenMsg = "Hyphen error";
	const string digitMsg  = 
		"Please enter digits and a hyphen only";

	char another = 'Y';
    string phone = "";
	bool badData = false;

	while (std::toupper(another) == 'Y')
	{
		cout << "Enter a phone number (###-####): ";
		getline(cin, phone);

		badData = false;

		if (phone.length() != 8)
		{
			cout << lengthMsg << endl;
			badData = true;
		}
		else
			if (phone.substr(3) != "-")
			{
				cout << hyphenMsg << endl;
				badData = true;
			}
			else
			{
				string digitTest = "";
				digitTest = phone.substr(0, 3) 
					+ phone.substr(4);
				int x = 0;
				bool allDigits = true;
				while (x < 7 && allDigits)
				{
					if (digitTest.substr(x, 1) < "1" && 
						digitTest.substr(x, 1) > "9")
					{
						cout << digitMsg << endl;
						allDigits = false;
						badData = true;
					}
					else
						x += 1;
					//end if
				} //end while
			} //end if
		//end if

		if (badData == false)
			cout << phone 
				<< " has the correct format." << endl;
		//end if

		cout << endl << "Another phone number (Y/N)? ";
		cin >> another;
		cin.ignore(100, '\n');
	}  //end while

    return 0;
}   //end of main function