#pragma once

# include <string>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal& animal);
		Animal& operator=(const Animal& animal);
		std::string getType() const;
		virtual void makeSound() const;
		virtual void *get_pointer() const = 0;
};
