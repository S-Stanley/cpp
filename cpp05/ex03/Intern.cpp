#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(Intern const &src)
{
	(void)src;
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern		&Intern::operator=(Intern const &src)
{
	(void)src;
	return (*this);
}

Form		*Intern::makeForm(std::string name, std::string target)
{
	int			index = -1;
	std::string	tab[] = { "robotomy", "presidential", "shubbery" };

	for (int i = 0; i < 3; i++)
	{
		if (name.find(tab[i]))
		{
			index = i;
			break ;
		}
	}
	switch (index)
	{
		case 0:
			return (new RobotomyRequestForm(target));
			break ;
		case 1:
			return (new PresidentialPardonForm(target));
			break ;
		case 2:
			return (new ShrubberyCreationForm(target));
			break ;
		default:
			std::cout << "This form do no exist" << std::endl;
	}
	return (NULL);
}

Intern::~Intern(void)
{
	std::cout << "Intern constructor called" << std::endl;
}