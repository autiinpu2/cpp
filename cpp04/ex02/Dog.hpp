#ifndef DOG_H
#define DOG_H

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *_brain;
	public:
		Dog();
		~Dog();
		void makeSound() const;
		void* get_pointer(void) const;
};

#endif
