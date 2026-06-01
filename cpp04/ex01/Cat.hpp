#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_brain;
	public:
		Cat();
		~Cat();
		void makeSound() const;
		void* get_pointer(void) const;
};

#endif
