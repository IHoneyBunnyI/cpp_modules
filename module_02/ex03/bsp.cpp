#include "Point.hpp"



float sign(Point p1, Point p2, Point p3)
{
	Fixed result;
    result = (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
	return (result.toFloat());
}

bool bsp(Point v1, Point v2, Point v3, Point pt)
{
    float d1, d2, d3;
    bool has_neg, has_pos;

    d1 = sign(pt, v1, v2);
    d2 = sign(pt, v2, v3);
    d3 = sign(pt, v3, v1);

	//std:: cout << d1 << " " << d2 << " " << d3 << std::endl;
    has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
	//std::cout << has_neg << " " << has_pos << std::endl;

    return !(has_neg && has_pos);
}

