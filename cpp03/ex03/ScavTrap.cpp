#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	ClapTrap::_hitPts = 100;
	ClapTrap::_energyPts = 50;
	ClapTrap::_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap name constructor called: " << name << std::endl;
	ClapTrap::_hitPts = 100;
	ClapTrap::_energyPts = 50;
	ClapTrap::_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &src)
{
	std::cout << "ScavTrap operator affectation called" << std::endl;
	this->_name = src.getName();
	this->_attackDamage = src.getDamage();
	this->_hitPts = src.getHits();
	this->_energyPts = src.getEnergy();
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energyPts == 0)
	{
		std::cout << this->getName() << " has no more energy" << std::endl;
		return ;
	}
	std::cout << this->_name << " IS ATTACKING " << target << std::endl;
	this->_energyPts--;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap now entering into gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called: " << this->_name << std::endl;
}