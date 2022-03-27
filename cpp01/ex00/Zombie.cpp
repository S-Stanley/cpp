#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

void	Zombie::annonce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " destroyed" << std::endl;
}