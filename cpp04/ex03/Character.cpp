#include "Character.hpp"
#include <cstddef>


Character::Character(std::string name) : _name(name), _materials_nb(0), _floor_size(0) {
	for (int i = 0; i < 4; i++) {
		_materials[i] = NULL;
	}
	for (int i = 0; i < 100; i++) {
		_floor[i] = NULL;
	}
}

Character::~Character() {
	for(int i = 0; i < 4; i++)
	{
		if (_materials[i] != NULL) {
			delete _materials[i];
		}
	}
	for(int i = 0; i < this->_floor_size;i++) {
		delete _floor[i];
	}
}

std::string const & Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria* m) {
	if (this->_materials_nb < 4) {
		for (int i = 0; i < 4; i++) {
			if (this->_materials[i] == NULL) {
				this->_materials[i] = m;
				break;
			}
		}
		this->_materials_nb++;
	}
	else {
		std::cerr << "There's already 4 items in inventory" << std::endl;
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4) {
		if (this->_materials[idx] != NULL) {
			if (this->_floor_size < 100) {
				_floor[this->_floor_size] = this->_materials[idx];
				this->_floor_size++;
			}
			else {
				std::cerr << "Floor is full!" << std::endl;
			}
			this->_materials[idx] = NULL;
			this->_materials_nb--;
		}
		else {
			std::cerr << "There is no item in slot " << idx << std::endl;
		}
	}
	else {
		std::cerr << "Enter an Id between 0 and 3" << std::endl;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && this->_materials[idx] != NULL)
		this->_materials[idx]->use(target);
}
