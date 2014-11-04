//Ch8Lab1.cpp
//Simulates a clock’s hour and minute hands 
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	for (int hour = 0; hour < 3; hour = hour + 1)
	{
		//display hour
		cout << endl << "Hour: " << hour << endl;
		cout << "Minutes: " << endl << "  ";
		for (int minute = 0; minute < 60; minute += 1)
			//display minute
			cout << minute << "  ";
		//end for minute
		cout << endl;
	}	//end for hour
	
	return 0;
}   //end of main function