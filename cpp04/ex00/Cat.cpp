#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat const &src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat			&Cat::operator=(Cat const &src)
{
	this->type = src.getType();
	return (*this);
}

std::string	Cat::getType(void) const
{
	return (this->type);
}

void		Cat::makeSound(void) const
{
	std::cout << "Miaouuu" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}