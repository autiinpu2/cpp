#include "scavtrap.hpp"
#include "claptrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::guardGate()
{
	if (this->Ep <= 0){
		std::cout << "ScavTrap " << this->_name << " Does not have enough Ep" << std::endl;
		return ;
	}
	if (this->Hp <= 0){
		std::cout << "ScavTrap " << this->_name << " Is dead" << std::endl;
		return ;
	}
	std::cout << "Gate keeper mode is now activated" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->Ep <= 0){
		std::cout << "ScavTrap " << this->_name << " Does not have enough Ep" << std::endl;
		return ;
	}
	if (this->Hp <= 0){
		std::cout << "ScavTrap " << this->_name << " Is dead" << std::endl;
		return ;
	}
	this->Ep -= 1;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->Ad << " points of damage! " << std::endl;
}

