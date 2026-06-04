#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};
