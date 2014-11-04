//Ch9AppE07.cpp
//Calculates and displays the miles per gallon
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;

//function prototypes
double getMiles();
double getNumGallons();
double calcMpg();

int main()
{	
	//declare variables
	double miles       = 0.0;
	double gallons     = 0.0;
	double milesPerGal = 0.0;
	
	//enter input items
	miles = getMiles();
	gallons = getNumGallons();

	//calculate miles per gallon
	milesPerGal = calcMpg(miles);

	//display output item
	cout << fixed << setprecision(1);
	cout << "Miles per gallon: " << milesPerGal << endl;

    return 0;
}   //end of main function

//*****function definitions*****
double getMiles()
{
	double numMiles = 0.0;
	cout << "Enter the number of miles: ";
	cin >> numMiles;
	return numMiles;
}	//end of getMiles function

double getNumGallons()
{
	double numGals = 0.0;
	cout << "Enter number of gallons: ";
	cin >> numGals;
	return numGals;
}	//end of getNumGallons function

double calcMpg(double distance, double galUsed)
{
	return distance / galUsed;
}	//end of calcMpg function

