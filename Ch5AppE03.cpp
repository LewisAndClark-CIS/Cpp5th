//Ch5AppE03.cpp
//Calculates and displays the total price
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
     //declare variables
     int numCds        = 0;
     double cdPrice    = 0.0;
     double totalPrice = 0.0;

     //get user's input
     cout << "Number of CDs purchased: ";
     cin >> numCds;
     cout << "CD price: ";
     cin >> cdPrice;

     //calculate total price
     totalPrice = static_cast<double>(numCds) * cdPrice;

     //display total price
     cout << "Total price: $" << totalPrice << endl;

     return 0;
}   //end of main function