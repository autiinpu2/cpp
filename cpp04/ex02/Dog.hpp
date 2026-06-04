#pragma once

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
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
