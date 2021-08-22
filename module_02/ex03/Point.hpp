#ifndef POINT_HPP
#define POINT_HPP

class Point
{
	private:

	public:
		Point();
		~Point();
		Point(const Point& ref);
		const Point& operator = (const Point& ref);
};

#endif

