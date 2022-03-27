#include "Animal.hpp"

Animal::Animal(void): type("")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal	&Animal::operator=(Animal const &src)
{
	std::cout << "Animal operator affectation called" << std::endl;
	this->type = src.getType();
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal noise" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}