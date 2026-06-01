#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	std::cout << "Cat default constructor" << std::endl;
	this->_brain = new Brain();
	this->_type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
	delete this->_brain;
}

void Cat::makeSound() const {
	std::cout << "**Meow Meow**" << std::endl;
}

void* Cat::get_pointer(void) const
{
	return (void*)(this->_brain);
}
