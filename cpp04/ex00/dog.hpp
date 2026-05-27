#ifndef DOG_H
#define DOG_H

# include "animal.hpp"

class Dog : public Animal
{
	private:
	public:
		Dog();
		~Dog();
		void makeSound();
};

#endif
