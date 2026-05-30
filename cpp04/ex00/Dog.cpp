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

void Dog::makeSound() const {
	std::cout << "**Wouf Wouf**" << std::endl;
}
