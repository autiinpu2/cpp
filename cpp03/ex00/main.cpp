#include "claptrap.hpp"
#include <iostream>

int main() {
	std::cout << "--- Constructing ClapTraps ---" << std::endl;
	ClapTrap clap1("CL4P-TP");
	ClapTrap clap2("B4D-ASS");

	std::cout << "\n--- Basic Actions ---" << std::endl;
	clap1.attack("a poor Skag");
	clap1.takeDamage(5);
	clap1.beRepaired(3);

	std::cout << "\n--- Testing Energy Depletion ---" << std::endl;
	for (int i = 0; i < 9; i++) {
		clap1.attack("a wooden barrel");
	}

	std::cout << "\n--- Testing Death (0 Hit Points) ---" << std::endl;
	clap2.takeDamage(15);
	
	clap2.attack("Handsome Jack");
	clap2.beRepaired(5);
	
	clap2.takeDamage(10);

	std::cout << "\n--- Destructors ---" << std::endl;
	return 0;
}


