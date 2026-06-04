#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
}

Ice::~Ice()
{
	delete this;
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

AMateria* Ice::clone() const
{
	AMateria *new_ice = new Ice();
	return new_ice;
}

