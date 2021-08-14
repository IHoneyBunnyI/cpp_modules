#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int value;
	static const int number_of_fractional_bits;
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed& fixed);
	~Fixed();

	Fixed &operator = (const Fixed& fixed);

	bool operator > (const Fixed& fixed);
	bool operator < (const Fixed& fixed);
	bool operator >= (const Fixed& fixed);
	bool operator <= (const Fixed& fixed);
	bool operator == (const Fixed& fixed);
	bool operator != (const Fixed& fixed);

	Fixed operator + (const Fixed& fixed);
	Fixed operator - (const Fixed& fixed);
	Fixed operator * (const Fixed& fixed);
	Fixed operator / (const Fixed& fixed);

	Fixed& operator++(); // версия префикс
	Fixed& operator--(); // версия префикс
	Fixed operator++(int); // версия постфикс
	Fixed operator--(int); // версия постфикс

	static Fixed& min(Fixed& a, Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);
	static const Fixed&	max(const Fixed& a, const Fixed& b);

	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream& operator << (std::ostream& cout, const Fixed& fixed);

#endif
