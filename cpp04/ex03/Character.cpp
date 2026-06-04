#include "Character.hpp"
#include <cstddef>


Character::Character(std::string name) : _name(name), _materials_nb(0), _floor_size(0) {}

Character::~Character() {
	for(int i = 0; i < this->_floor_size;i++)
	{
		delete _floor[i];
	}
}

std::string const & Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria* m) {
	if (this->_materials_nb < 4) {
		this->_materials[this->_materials_nb] = m->clone();
		this->_materials_nb++;
	}
	else {
		std::cerr << "There's already 4 items in inventory" << std::endl;
	}
}

void Character::unequip(int idx) {
	if (idx < 4) {
		if (this->_materials_nb <= idx) {
			_floor[_floor_size] = this->_materials[idx];
			_floor_size++;
			this->_materials[idx] = NULL;
			this->_materials_nb--;
		}
		else if (this->_materials_nb > 0) {
			std::cerr << "There is no item in slot " << idx << ", so enter an Id between 0 and " << this->_materials_nb << std::endl;
		}
		else {
			std::cerr << "There is no item in Inventory" << std::endl;
		}
	}
	else {
		std::cerr << "The inventory have only 4 slots, so enter an Id between 0 and 3" << std::endl;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < this->_materials_nb)
		this->_materials[idx]->use(target);
}
