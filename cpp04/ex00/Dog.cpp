#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const &src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog			&Dog::operator=(Dog const &src)
{
	this->type = src.getType();
	return (*this);
}

std::string	Dog::getType(void) const
{
	return (this->type);
}

void		Dog::makeSound(void) const
{
	std::cout << "Whouuuf" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}