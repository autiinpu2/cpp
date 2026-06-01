#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	this->_type = "Animal";
	std::cout << "Default constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Destructor called" << std::endl;
}

Animal::Animal(const Animal& animal)
{
	this->_type = animal.getType();
	std::cout << "Copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& animal)
{
	_type = animal.getType();
	std::cout << "Copy operator called" << std::endl;
	return *this;
}

std::string Animal::getType() const
{
	return this->_type;
}

void Animal::makeSound() const
{
	std::cout << "*animal sound*" << std::endl;
}
