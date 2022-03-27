#include "AAnimal.hpp"

AAnimal::AAnimal(void): type("")
{
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &src)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = src;
}

AAnimal	&AAnimal::operator=(AAnimal const &src)
{
	std::cout << "AAnimal operator affectation called" << std::endl;
	this->type = src.getType();
	return (*this);
}

std::string	AAnimal::getType(void) const
{
	return (this->type);
}

void	AAnimal::makeSound(void) const
{
	std::cout << "AAnimal noise" << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor called" << std::endl;
}