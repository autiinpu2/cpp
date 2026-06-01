#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	this->_brain = new Brain();
	this->_type = "Dog";
	std::cout << "Dog default constructor" << std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(const Dog& animal)
{
	this->_type = animal._type;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& animal)
{
	if (this != &animal)
		_type = animal._type;
	std::cout << "Dog copy operator called" << std::endl;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "**Wouf Wouf**" << std::endl;
}

void* Dog::get_pointer(void) const {
	return (void*)(this->_brain);
}
