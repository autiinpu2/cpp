#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& animal)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->_type = animal._type;
}

WrongCat& WrongCat::operator=(const WrongCat& animal)
{
	std::cout << "WrongCat copy operator called" << std::endl;
	if (this != &animal)
		_type = animal._type;
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "**Meow Meow**" << std::endl;
}
