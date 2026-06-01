#pragma once

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_brain;
	public:
		Cat();
		~Cat();
		Cat(const Cat& animal);
		Cat& operator=(const Cat& animal);
		void makeSound() const;
		void* get_pointer(void) const;
};
