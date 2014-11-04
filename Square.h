//Square.h
  
//declaration section
class Square
{
public:
	Square();
	void setSide(int);
	int getSide();
	int calculateArea();
private:
	int side;
};

//implementation section
Square::Square()
{
	side = 0;
}  //end of default constructor
 
void Square::setSide(int sideValue)
{
	if (sideValue > 0)
		side = sideValue;
	else
		side = 0;
	//end if
}  //end of setSide method

int Square::getSide()
{
	return side;
}  //end of getSide method
   
int Square::calculateArea()
{
	return side * side;
}  //end of calculateArea method