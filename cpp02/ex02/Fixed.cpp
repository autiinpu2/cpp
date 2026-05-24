#include "Fixed.hpp"
#include <cmath>
#include <iostream>
#include <ostream>

Fixed::Fixed()
{
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
	this->value = fixed.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	value = fixed.getRawBits();
	return *this;
}

bool Fixed::operator>(const Fixed& fixed)
{
	return value > fixed.value;
}

bool Fixed::operator<(const Fixed& fixed)
{
	return value < fixed.value;
}

bool Fixed::operator>=(const Fixed& fixed)
{
	return value >= fixed.value;
}

bool Fixed::operator<=(const Fixed& fixed)
{
	return value <= fixed.value;
}

bool Fixed::operator==(const Fixed& fixed)
{
	return value == fixed.value;
}

bool Fixed::operator!=(const Fixed& fixed)
{
	return value != fixed.value;
}

Fixed Fixed::operator+(const Fixed& fixed) const
{
	Fixed result;
	result.setRawBits(this->value + fixed.getRawBits());
	return result;
}

Fixed Fixed::operator-(const Fixed& fixed) const
{
	Fixed result;
	result.setRawBits(this->value - fixed.getRawBits());
	return result;
}


Fixed Fixed::operator*(const Fixed& fixed) const
{
	Fixed result;
	result.setRawBits(this->value * fixed.getRawBits());
	return result;
}

Fixed Fixed::operator/(const Fixed& fixed) const
{
	Fixed result;
	if (fixed.getRawBits() != 0)
		result.setRawBits(this->value / fixed.getRawBits());
	return result;
}

Fixed& Fixed::operator++(void) {
    ++this->value;
    return *this;
}

Fixed& Fixed::operator--(void) {
    --this->value;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
	++this->value;
    return tmp;
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
    --this->value;
    return tmp;
}


std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}

Fixed::~Fixed()
{
}

int	Fixed::getRawBits(void) const
{
	return this->value;
}

void	Fixed::setRawBits(const int raw)
{
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


Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	else
		return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	else
		return b;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	else
		return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	else
		return b;
}


