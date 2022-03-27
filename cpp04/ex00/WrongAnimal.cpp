#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &src)
{
	std::cout << "WrongAnimal operator affectation called" << std::endl;
	this->type = src.getType();
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal noise" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}