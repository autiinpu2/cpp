#include "Fixed.hpp"
#include <cmath>
#include <ostream>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const int value)
{
	this->value = value << this->bits;
}

Fixed::Fixed(const float value)
{
	this->value = roundf( value * (1 << this->bits) );
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = fixed.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	value = fixed.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

float	Fixed::toFloat() const
{
	return (float)this->value / (1 << bits);
}

int	Fixed::toInt() const
{
	return this->value / (1 << bits);
}

