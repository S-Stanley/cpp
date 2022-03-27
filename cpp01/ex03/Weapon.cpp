#include "Weapon.hpp"

Weapon::Weapon(std::string name): _type(name)
{
	return ;
}

const std::string &Weapon::getType(void)
{
	std::string	&typeRef = this->_type;
	return (typeRef);
}

void	Weapon::setType(std::string new_value)
{
	this->_type = new_value;
}

Weapon::~Weapon(void)
{
	return ;
}