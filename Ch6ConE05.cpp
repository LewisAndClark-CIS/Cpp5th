//Ch6ConE05.cpp
//Displays a grade based on the average 
//of three test scores
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{	
 	//declare variables
	int score1 = 0;
	int score2 = 0;
	int score3 = 0;
	double avg = 0.0;
	char grade = ' ';
	
	//enter scores
	cout << "Score 1: ";
	cin >> score1;
	cout << "Score 2: ";
	cin >> score2;
	cout << "Score 3: ";
	cin >> score3;

	//calculate average
	avg = static_cast<double>(score1 + score2 + score3) 
		/ 3.0;

	//assign grade
	
	//display output
	cout << "Grade: " << grade << endl;

    return 0;
}   //end of main function