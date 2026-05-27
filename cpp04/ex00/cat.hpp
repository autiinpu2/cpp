#ifndef CAT_H
# define CAT_H

# include "animal.hpp"

class Cat : public Animal
{
	private:
	public:
		Cat();
		~Cat();
		void makeSound();
};

#endif
