#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	this->_brain = new Brain();
	this->_type = "Cat";
	std::cout << "Cat default constructor" << std::endl;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor" << std::endl;
}

Cat::Cat(const Cat& animal)
{
	this->_type = animal._type;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& animal)
{
	if (this != &animal)
		_type = animal._type;
	std::cout << "Cat copy operator called" << std::endl;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "**Meow Meow**" << std::endl;
}

void* Cat::get_pointer(void) const {
	return (void*)(this->_brain);
}
