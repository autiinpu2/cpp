#include "WrongCat.hpp"

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
	this->_type = animal._type;
	std::cout << "Cat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& animal)
{
	if (this != &animal)
		_type = animal._type;
	std::cout << "Cat copy operator called" << std::endl;
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "**Meow Meow**" << std::endl;
}
