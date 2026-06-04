#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal()
{
	std::cout << "Default constructor called" << std::endl;
	this->_type = "Animal";
}

AAnimal::~AAnimal()
{
	std::cout << "Destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& animal)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_type = animal.getType();
}

AAnimal& AAnimal::operator=(const AAnimal& animal)
{
	std::cout << "Copy operator called" << std::endl;
	_type = animal.getType();
	return *this;
}

std::string AAnimal::getType() const
{
	return this->_type;
}

void AAnimal::makeSound() const
{
	std::cout << "*animal sound*" << std::endl;
}
