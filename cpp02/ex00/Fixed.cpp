#include "Fixed.hpp"
#include <ostream>

Fixed::Fixed()
{
	std::cout << "Constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = fixed.value;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	value = fixed.value;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	return this->value;
}

void	Fixed::setRawBits(const int raw)
{
	this->value = raw;
}
