#include "Karen.hpp"

Karen::Karen(void)
{
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
	{
		std::cout << "[ DEBUG ]" << std::endl;
		return (0);
	}
	if (level.compare("INFO") == 0)
	{
		std::cout << "[ INFO ]" << std::endl;
		return (1);
	}
	if (level.compare("WARNING") == 0)
	{
		std::cout << "[ WARNING ]" << std::endl;
		return (2);
	}
	if (level.compare("ERROR") == 0)
	{
		std::cout << "[ ERROR ]" << std::endl;
		return (3);
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return (4);
}

void	Karen::complain(std::string level)
{
	switch (this->find_equivalent(level)){
		case (0):
			this->debug();
		case (1):
			this->info();
		case (2):
			this->warning();
		case (3):
			this->error();
	}
}

Karen::~Karen(void)
{
	return ;
}