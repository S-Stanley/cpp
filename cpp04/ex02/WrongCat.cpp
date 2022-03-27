#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &src)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
}

WrongCat			&WrongCat::operator=(WrongCat const &src)
{
	this->type = src.getType();
	return (*this);
}

std::string	WrongCat::getType(void) const
{
	return (this->type);
}

void		WrongCat::makeSound(void) const
{
	std::cout << "Miaouuu" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}