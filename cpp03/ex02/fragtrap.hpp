#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "claptrap.hpp"
#include <string>
class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		~FragTrap();
		void highFivesGuys(void);
};

#endif
