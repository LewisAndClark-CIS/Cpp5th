//Ch5Lab5.cpp
//Dislays a shipping charge
//Created/revised by <your name> on <current date>

#include <iostream> 
#include <string>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;
using std::fixed;
using std::setprecision;

int main()
{
	string stateId  = "";
	double sale     = 0.0;
	double shipping = 0.0;

	//enter input data
	cout << "Two-character state ID: ";
	getline(cin, stateId);

	cout << "Sale amount: ";
	cin >> sale;

	//calculate shipping charge
	shipping = sale * .01;
	//add $5 to Tennessee shipments
	if (stateId = "TN")
		shipping = shipping + 5;
	//end if

	//display shipping charge
	cout << fixed << setprecision(2);
	cout << "Shipping: " << shipping << endl;

	return 0;
}   //end of main function
