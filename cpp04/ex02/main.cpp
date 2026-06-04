#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main(void)
{
	{
		int n = 10;
		int i = -1;
		
		AAnimal	*animals[10];

		std::cout << "Assignation\n" << std::endl;
		while (++i < n) {
			if (i < n / 2)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}
		std::cout << "\nAnnounce\n" << std::endl;
		i = -1;
		while (++i < n)
			animals[i]->makeSound();
		std::cout << "\nCleanup\n" << std::endl;
		i = -1;
		while (++i < n)
			delete animals[i];
	}
	return (0);
}
