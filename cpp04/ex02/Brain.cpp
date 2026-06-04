#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& oldBrain)
{
	std::cout << "Copy constructor called" << std::endl;
	for (int i = 0;i < 100;i++)
		this->_ideas[i] = oldBrain._ideas[i];
}

Brain& Brain::operator=(const Brain& oldBrain)
{
	std::cout << "Copy operator called" << std::endl;
	for (int i = 0;i < 100;i++)
		_ideas[i] = oldBrain._ideas[i];
	return *this;
}
