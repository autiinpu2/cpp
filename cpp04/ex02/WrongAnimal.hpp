#pragma once

# include <string>

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal& animal);
		WrongAnimal& operator=(const WrongAnimal& animal);
		std::string getType() const;
		void makeSound() const;
};
