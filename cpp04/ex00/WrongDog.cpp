#include "WrongDog.hpp"

WrongDog::WrongDog(void)
{
	std::cout << "WrongDog constructor called" << std::endl;
	this->type = "WrongDog";
}

WrongDog::WrongDog(WrongDog const &src)
{
	std::cout << "WrongDog copy constructor called" << std::endl;
	*this = src;
}

WrongDog			&WrongDog::operator=(WrongDog const &src)
{
	this->type = src.getType();
	return (*this);
}

std::string	WrongDog::getType(void) const
{
	return (this->type);
}

void		WrongDog::makeSound(void) const
{
	std::cout << "Whouuuf" << std::endl;
}

WrongDog::~WrongDog(void)
{
	std::cout << "WrongDog destructor called" << std::endl;
}