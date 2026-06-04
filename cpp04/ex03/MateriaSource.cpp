#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource() : _materials_nb(0) {
	for (int i = 0; i < 4; i++) {
		this->_materials[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < this->_materials_nb; i++)
	{
		delete this->_materials[i];
	}
}

void MateriaSource::learnMateria(AMateria* n)
{
	if (this->_materials_nb < 4)
	{
		for (int i = 0; i < 4; i++) {
			if (this->_materials[i] == NULL) {
				this->_materials[i] = n;
				this->_materials_nb++;
				break;
			}
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_materials[i] != NULL && this->_materials[i]->getType() == type)
		{
			return this->_materials[i]->clone();
		}
	}
	return NULL;
}
