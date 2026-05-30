#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main(void)
{
	{
		std::cout << "--Dog test--\n\n";
		Animal *rufus = new Dog();

		rufus->makeSound();
		delete rufus;
	}
	{
		std::cout << "\n\n--Cat test--\n\n";
		Animal *max = new Cat();
		
		max->makeSound();
		delete max;
	}
	{
		std::cout << "\n\n--WrongCat test--\n\n";
		WrongAnimal *felix = new WrongCat();

		felix->makeSound();
		delete felix;
	}
	return (0);
}
