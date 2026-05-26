#include "fragtrap.hpp"
#include "claptrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "High-Five :)" << std::endl;
}

