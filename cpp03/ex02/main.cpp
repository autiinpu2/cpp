#include "fragtrap.hpp"
#include <iostream>

int main()
{
	std::cout << "==== CONSTRUCTION TESTS ====\n" << std::endl;
	{
		std::cout << "Construction" << std::endl;
		FragTrap fraggy("FR4G-TP");

		std::cout << "\nTest Inherited actions" << std::endl;
		fraggy.attack("Random golem");
		fraggy.takeDamage(40);
		fraggy.beRepaired(20);

		std::cout << "\nTest High Five" << std::endl;
		fraggy.highFivesGuys();

		std::cout << "\nDestruction" << std::endl;
	}
}

