#ifndef WRONGCAT_H
#define WRONGCAT_H

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat& animal);
		WrongCat& operator=(const WrongCat& animal);
		void makeSound() const;
};

#endif
