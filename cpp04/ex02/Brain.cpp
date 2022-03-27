#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain	&Brain::operator=(Brain const &src)
{
	std::cout << "Brain surcharge affectation called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->setIdea(i, src.getIdea(i));
	return (*this);
}

std::string	Brain::getIdea(int i) const
{
	if (i < 0 || i > 100)
		return (NULL);
	return (this->ideas[i]);
}

void		Brain::setIdea(int i, std::string value)
{
	this->ideas[i] = value;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}