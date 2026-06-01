#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	std::cout << "Default constructor called" << std::endl;
	this->_type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& animal)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_type = animal.getType();
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& animal)
{
	std::cout << "Copy operator called" << std::endl;
	_type = animal.getType();
	return *this;
}

std::string WrongAnimal::getType() const
{
	return this->_type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "* WrongAnimal Sound *" << std::endl;
}
