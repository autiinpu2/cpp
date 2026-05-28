#include "fragtrap.hpp"
#include "claptrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (this->Ep <= 0){
		std::cout << "FragTrap " << this->_name << " Does not have enough Ep" << std::endl;
		return ;
	}
	if (this->Hp <= 0){
		std::cout << "FragTrap " << this->_name << " Is dead" << std::endl;
		return ;
	}
	std::cout << "High-Five :)" << std::endl;
}

