#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria *_materials[4];
		AMateria *_floor[100];
		int		_materials_nb;
		int		_floor_size;
	public:
		Character(std::string name);
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};
