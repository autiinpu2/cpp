#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap
{
	private:
		std::string	_name;
		int	Hp;
		int	Ep;
		int	Ad;
	 public:
		ClapTrap(std::string name);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif

