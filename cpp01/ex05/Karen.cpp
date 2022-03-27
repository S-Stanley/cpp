#include "Karen.hpp"

Karen::Karen(void)
{
	this->_tab[0] = &Karen::debug;
	this->_tab[1] = &Karen::info;
	this->_tab[2] = &Karen::warning;
	this->_tab[3] = &Karen::error;
	return ;
}

void	Karen::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

int		Karen::find_equivalent(std::string level)
{
	if (level.compare("DEBUG") == 0)
		return (0);
	if (level.compare("INFO") == 0)
		return (1);
	if (level.compare("WARNING") == 0)
		return (2);
	if (level.compare("ERROR") == 0)
		return (3);
	return (-1);
}

void	Karen::complain(std::string level)
{
	int		index;

	index = this->find_equivalent(level);
	if (index == -1)
	{
		std::cout << "index out of range" << std::endl;
		return ;
	}
	(this->*_tab[index])();
}

Karen::~Karen(void)
{
	return ;
}
