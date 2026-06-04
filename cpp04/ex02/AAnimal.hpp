#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>

class AAnimal
{
	protected:
		std::string _type;
	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(const AAnimal& animal);
		AAnimal& operator=(const AAnimal& animal);
		std::string getType() const;
		virtual void makeSound() const = 0;
};

#endif
