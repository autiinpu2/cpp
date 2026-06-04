#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
}

Cure::~Cure()
{
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
	AMateria *new_cure = new Cure();

	return new_cure;
}

