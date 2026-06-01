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

Cat::Cat(const Cat& animal)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = animal._type;
}

Cat& Cat::operator=(const Cat& animal)
{
	std::cout << "Cat copy operator called" << std::endl;
	if (this != &animal)
		_type = animal._type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "**Meow Meow**" << std::endl;
}
