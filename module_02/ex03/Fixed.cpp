#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int Fixed::number_of_fractional_bits = 8;

Fixed::Fixed()
{
	this->value = 0;
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	//std::cout << "Int constructor called" << std::endl;
	this->value = value * (1 << Fixed::number_of_fractional_bits);
}

Fixed::Fixed(const float value)
{
	//std::cout << "Float constructor called" << std::endl;
	this->value = (int)roundf(value * (1 << Fixed::number_of_fractional_bits));
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed &Fixed::operator = (const Fixed& fixed)
{
	//std::cout << "Assignation operator called" << std::endl;
	this->value = fixed.value;
	return (*this);
}

int Fixed::getRawBits() const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(const int raw)
{
	this->value = raw;
}

int Fixed::toInt() const
{
	return (this->value >> Fixed::number_of_fractional_bits);
}

float Fixed::toFloat( void ) const
{
	return ((float)this->value / (float)(1 << Fixed::number_of_fractional_bits));	
}

std::ostream& operator << (std::ostream& cout, const Fixed& fixed)
{
	cout << fixed.toFloat();
	return (cout);
}

bool Fixed::operator > (const Fixed& fixed) const
{
	return (this->value > fixed.getRawBits());
}

bool Fixed::operator < (const Fixed& fixed) const
{
	return (this->value < fixed.getRawBits());
}

bool Fixed::operator >= (const Fixed& fixed)
{
	return (this->value >= fixed.getRawBits());
}

bool Fixed::operator <= (const Fixed& fixed)
{
	return (this->value <= fixed.getRawBits());
}

bool Fixed::operator == (const Fixed& fixed)
{
	return (this->value == fixed.getRawBits());
}

bool Fixed::operator != (const Fixed& fixed)
{
	return (this->value != fixed.getRawBits());
}

Fixed Fixed::operator + (const Fixed& fixed)
{
	Fixed res;
	
	res.setRawBits(fixed.getRawBits() + this->value);
	return (res);
}

Fixed Fixed::operator - (const Fixed& fixed)
{
	Fixed res;
	
	res.setRawBits(fixed.getRawBits() - this->value);
	return (res);
}

Fixed Fixed::operator * (const Fixed& fixed)
{
	Fixed res;
	
	res.setRawBits((fixed.getRawBits() >> Fixed::number_of_fractional_bits) * this->value);
	return (res);
}

Fixed Fixed::operator / (const Fixed& fixed)
{
	Fixed res;
	
	res.setRawBits((this->value << Fixed::number_of_fractional_bits) / fixed.getRawBits());
	return (res);
}

Fixed &	Fixed::operator++() //префикс
{
	this->setRawBits(++this->value);
	return (*this);
}

Fixed &	Fixed::operator--() //префикс
{
	this->setRawBits(--this->value);
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed for_return(*this);
	this->setRawBits(++this->value);
	return (for_return);
}

Fixed Fixed::operator--(int)
{
	Fixed for_return(*this);
	this->setRawBits(--this->value);
	return (for_return);
}

Fixed &	Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return a;
	return b;
}

Fixed &	Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed &	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return a;
	return b;
}

const Fixed &	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return a;
	return b;
}
