//Ch9AppE03.cpp
//Calculates the total points earned on projects 
//and tests, then assigns a grade, and then displays 
//the total points earned and grade
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{	
    //declare variables
	int score       = 0;
	int totalPoints = 0;  //accumulator
	char grade      = ' ';

	//get first score
	cout << "First score (negative number to stop): "; 
	cin >> score; 
	
	while (score >= 0)
	{   
		//add score to accumulator
		totalPoints = totalPoints + score;
		//get next score
		cout << "Next score (negative number to stop): ";   
		cin >> score;
	} //end while
	
	//assign grade
	if (totalPoints >= 360)   
		grade = 'A';
	else if (totalPoints >= 320)   
		grade = 'B';
	else if (totalPoints >= 280)   
		grade = 'C';
	else if (totalPoints >= 240)   
		grade = 'D';
	else grade = 'F';
	//end ifs
	
	//display total points and grade
	cout << endl;
	cout << "Total points: " << totalPoints << endl;
	cout << "Grade: " << grade << endl;

	return 0;
}   //end of main function
