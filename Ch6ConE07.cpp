//Ch6ConE07.cpp
//Displays a message based on a grade
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{	
	//declare variable
	char grade = ' ';

	//enter input
	cout << "Enter a grade: ";
	cin >> grade;

	//display output
	switch (grade)
	{
	case 'A':	
	case 'a':	
			cout << "Excellent" << endl;
			break;
	case 'B':	
	case 'b':	
			cout << "Above Average" << endl;
			break;
	case 'C':	
	case 'c':	
			cout << "Average" << endl;
			break;
	case 'D':
	case 'd':	
	case 'F':
	case 'f':	
			cout << "Below Average" << endl;
			break;
	case 'I':	
	case 'i':	
			cout << "Incomplete" << endl;
			break;
	case 'W':	
	case 'w':	
			cout << "Withdrawal" << endl;
			break;
	default:	
			cout << "Incorrect Grade" << endl;
	}  //end switch
 
    return 0;
}   //end of main function