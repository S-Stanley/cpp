#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	return ;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " <<  this->_arme->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &arme)
{
	this->_arme = &arme;
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}