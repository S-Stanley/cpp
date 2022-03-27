#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &arme): _name(name), _arme(arme)
{
	return ;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_arme.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	return ;
}