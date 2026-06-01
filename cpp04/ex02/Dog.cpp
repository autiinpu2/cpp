#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	std::cout << "Dog default constructor" << std::endl;
	this->_brain = new Brain();
	this->_type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
	delete this->_brain;
}

void Dog::makeSound() const {
	std::cout << "**Wouf Wouf**" << std::endl;
}

void* Dog::get_pointer(void) const
{
	return (void*)(this->_brain);
}
