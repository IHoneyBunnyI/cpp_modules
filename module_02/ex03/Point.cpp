#include "Point.hpp"
#include "Fixed.hpp"


Point::Point()
{
	this->x = Fixed(0);
	this->y = Fixed(0);
}
Point::~Point(){}


Point::Point(float x, float y)
{
	this->x = Fixed(x);
	this->y = Fixed(y);
}

Point::Point(Point const &ref)
{
	*this=ref;
}


Point &	Point::operator=(Point const &ref)
{
	this->x = ref.x;	
	this->y = ref.y;	
	return (*this);
}

Fixed& Point::getX()
{
	return (this->x);
}

Fixed&	Point::getY()
{
	return (this->y);
}
