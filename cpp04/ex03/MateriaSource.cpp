#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource() : _materials_nb(0) {}

void MateriaSource::learnMateria(AMateria* n)
{
	if (_materials_nb < 4)
		this->_materials[this->_materials_nb++] = n->clone();
}

#include <stdio.h>

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < this->_materials_nb; i++)
	{
		if (this->_materials[i]->getType() == type)
		{
			return this->_materials[i]->clone();
		}
	}
	return NULL;
}
