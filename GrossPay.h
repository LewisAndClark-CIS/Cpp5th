//GrossPay.h
   
//declaration section
class GrossPay
{
public:
	double calculateGross(double);
	double calculateGross(double, double);
};

//implementation section
double GrossPay::calculateGross(double salary)
{
	return salary / 24.0;
}  //end of calculateGross method

double GrossPay::calculateGross(double hours, double rate)
{
	return hours * rate;
}  //end of calculateGross method