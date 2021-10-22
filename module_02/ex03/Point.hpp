#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point
{
	private:
		Fixed x;
		Fixed y;

	public:
		Point();
		Point(Fixed x, Fixed y);
		Point(float x, float y);
		~Point();
		Point(const Point& ref);
		Point& operator = (const Point& ref);
		Fixed& getX();
		Fixed&	getY();
};

#endif

