#ifndef DOG_H
#define DOG_H

# include "Animal.hpp"

class Dog : public Animal
{
	private:
	public:
		Dog();
		~Dog();
		Dog(const Dog& animal);
		Dog& operator=(const Dog& animal);
		void makeSound() const;
};

#endif
