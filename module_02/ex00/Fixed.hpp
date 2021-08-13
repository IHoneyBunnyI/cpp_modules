#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
	int value;
	static const int number_of_fractional_bits;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& fixed);
	Fixed &operator = (const Fixed& fixed);
	int getRawBits() const;
	void setRawBits(int const raw);

};

#endif
