#pragma once

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *_brain;
	public:
		Dog();
		~Dog();
		Dog(const Dog& animal);
		Dog& operator=(const Dog& animal);
		void makeSound() const;
		void* get_pointer(void) const;
};
