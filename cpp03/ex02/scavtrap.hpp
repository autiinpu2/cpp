#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "claptrap.hpp"
#include <string>
class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		void guardGate();
		void attack(const std::string& target);
};

#endif
