#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>
bool bsp( Point const a, Point const b, Point const c, Point const point);

int main()
{
	{
	Point	a(-1.0, 0.0);
	Point	b(1.0,1.0);
	Point	c(0.0,1.0);
	Point 	i(0.5,0.6);
	std::cout << bsp(a,b,c,i) << std::endl;
	}
	{
	Point	a(-1.0, -1.0);
	Point	b(1.0,1.0);
	Point	c(0.0,0.0);
	Point 	i(0.0,0.01);
	std::cout << bsp(a,b,c,i) << std::endl;
	}
	return 0;
}
