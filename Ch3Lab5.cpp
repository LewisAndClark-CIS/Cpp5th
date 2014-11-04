//Ch3Lab5.cpp - calculates and displays an average
//Created/revised by <your name> on <current date>


using std::cout;
using std::cin;
using std::endl;

int main()
{
	//declare variables
	double num1 = 0.0;
	double num2 = 0.0;
	double num3 = 0.0;
	double sum  = 0.0;
	double avg  = 0.0;

	//enter input items
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: "
	cin >> num2;
	cout << "Enter the third number: ";
	cin >> num3;

	//calculate average
	avg = sum / 3;

	//display output item
	cout << "Average: " << avg << endl;

	return 0;
}	//end of main function
