#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class Cat : public Animal
{
	private:
	public:
		Cat();
		~Cat();
		Cat(const Cat& animal);
		Cat& operator=(const Cat& animal);
		void makeSound() const;
};

#endif
