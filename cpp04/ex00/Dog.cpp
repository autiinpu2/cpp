#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	std::cout << "Dog default constructor" << std::endl;
	this->_type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(const Dog& animal)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = animal._type;
}

Dog& Dog::operator=(const Dog& animal)
{
	std::cout << "Dog copy operator called" << std::endl;
	if (this != &animal)
		_type = animal._type;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "**Wouf Wouf**" << std::endl;
}
