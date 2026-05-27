#include "animal.hpp"
#include <iostream>

Animal::Animal()
{
	std::cout << "Default constructor called" << std::endl;
	this->_type = "Animal";
}

Animal::~Animal()
{
	std::cout << "Destructor called" << std::endl;
}

Animal::Animal(const Animal& animal)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_type = animal.getType();
}

Animal& Animal::operator=(const Animal& animal)
{
	std::cout << "Copy operator called" << std::endl;
	_type = animal.getType();
	return *this;
}

std::string Animal::getType() const
{
	return this->_type;
}

void Animal::makeSound()
{
	std::cout << "*animal sound*" << std::endl;
}
