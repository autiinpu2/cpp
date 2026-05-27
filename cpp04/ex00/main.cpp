#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	{
		Dog rufus;

		rufus.makeSound();
	}
	{
		Cat felix;
		
		felix.makeSound();
	}
	return (0);
}
