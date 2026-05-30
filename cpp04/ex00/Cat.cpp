#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	std::cout << "Cat default constructor" << std::endl;
	this->_type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "**Meow Meow**" << std::endl;
}
