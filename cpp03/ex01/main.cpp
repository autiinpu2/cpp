#include "scavtrap.hpp"
#include <iostream>

int main()
{
    std::cout << "\n==== CONSTRUCTING SCAVTRAPS ====\n" << std::endl;
    
    ScavTrap scav1("Serena");
    ScavTrap scav2("Goliath"); 

    std::cout << "\n==== TESTING ATTACKS (ScavTrap override) ====\n" << std::endl;
    
    scav1.attack("Handsome Jack");
    scav2.attack("A Skag");

    std::cout << "\n==== TESTING DAMAGE & REPAIR ====\n" << std::endl;
    
    scav1.takeDamage(40);
    scav1.beRepaired(20);
    
    scav2.takeDamage(120); 
    
    std::cout << "\n==== TESTING EXHAUSTION / DEATH ====\n" << std::endl;
    
    scav2.attack("A Skag");
    scav2.beRepaired(50);
    
    std::cout << "\n[Draining Serena's Energy...]" << std::endl;
    for (int i = 0; i < 49; i++) {
        scav1.attack("dummy");
    }
    scav1.beRepaired(10);

    std::cout << "\n==== TESTING SCAVTRAP SPECIAL ABILITY ====\n" << std::endl;
    
	scav1.guardGate();
    
	std::cout << "\n==== DESTRUCTING SCAVTRAPS ====\n" << std::endl;
    
    return 0;
}

