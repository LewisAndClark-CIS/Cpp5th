//Ch7Lab1.cpp
//Calculates the average temperature
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main()
{	
    //declare variables
	int numberOfTemps = 0;  //counter
	int totalTemp     = 0;  //accumulator
    int temp          = 0;
    double average    = 0.0;
 
    //get first temperature
	cout << "First temperature (999 to stop): ";
    cin >> temp;
	
	while (temp != 999)
	{
		//update counter and accumulator
		numberOfTemps = numberOfTemps + 1;
		totalTemp = totalTemp + temp;
	
		//get remaining temperatures
		cout << "Next temperature (999 to stop): ";
		cin >> temp;
	}	//end while
	
	//verify that the counter is greater than zero
	if (numberOfTemps > 0)
	{
		//calculate and display average temperature
		average = static_cast<double>(totalTemp) / 
			static_cast<double>(numberOfTemps);
		cout << fixed << setprecision(1);
		cout << endl << "Average temperature: " 
			<< average << endl;
	}
	else
		//display message
		cout << "No temperatures were entered." << endl;
	//end if

    return 0;
}   //end of main function
