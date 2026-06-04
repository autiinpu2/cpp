#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
}

Cure::~Cure()
{
	delete this;
}

void Cure::use(ICharacter& target) {
	std::cout << "* shoots an Cure bolt at " << target.getName() << " *\n";
}

AMateria* Cure::clone() const
{
	AMateria *new_cure = new Cure();

	return new_cure;
}

