#include "claptrap.hpp"
#include <iostream>


ClapTrap::ClapTrap(std::string name) {
	this->_name = name;
	this->Hp = 10;
	this->Ep = 10;
	this->Ad = 0;
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->Ep <= 0){
		std::cout << "ClapTrap " << this->_name << " Does not have enough Ep" << std::endl;
		return ;
	}
	if (this->Hp <= 0){
		std::cout << "ClapTrap " << this->_name << " Is dead" << std::endl;
		return ;
	}
	this->Ep -= 1;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->Ad << " points of damage! " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Hp <= 0){
		std::cout << "ClapTrap " << this->_name << " Is dead" << std::endl;
		return ;
	}
	this->Hp -= amount;
	std::cout << "ClapTrap " << this->_name << " Got hit, causing " << amount << " points of damage! He now have " << this->Hp << " Hp Repaining." << std::endl;
}


void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Ep <= 0){
		std::cout << "ClapTrap " << this->_name << " Does not have enough Ep" << std::endl;
		return ;
	}
	if (this->Hp <= 0){
		std::cout << "ClapTrap " << this->_name << " Is dead" << std::endl;
		return ;
	}
	this->Ep -= 1;
	this->Hp += amount;
	std::cout << "ClapTrap " << this->_name << " Healed himself for an amout of " << amount << " Hp! He now have " << this->Hp << " Hp Repaining." << std::endl;
}
