

#include <iostream>
#include <ostream>
#include <string>
int main(void)
{
	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << "                     Init String                       " << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	std::string	hi = "HI THIS IS BRAIN";
	std::string *ptr = &hi;
	std::string	&ref = hi;
	
	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << "                Print Memory Adresses                  " << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;

	std::cout << &hi << std::endl;
	std::cout << ptr << std::endl;
	std::cout << &ref << std::endl;

	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << "                    Print values                       " << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;

	std::cout << hi << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
}