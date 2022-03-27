#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	ClapTrap::_hitPts = FragTrap::_hitPts;
	ClapTrap::_energyPts = ScavTrap::_energyPts;
	ClapTrap::_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name): _name(name)
{
	std::cout << "DiamondTrap name constructor called" << std::endl;
	ClapTrap::_hitPts = FragTrap::_hitPts;
	ClapTrap::_energyPts = ScavTrap::_energyPts;
	ClapTrap::_attackDamage = FragTrap::_attackDamage;
	ClapTrap::_name = name;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &src)
{
	std::cout << "DiamondTrap Surcharge operator called" << std::endl;
	this->_name = src.getName();
	this->_attackDamage = src.getDamage();
	this->_hitPts = src.getHits();
	this->_energyPts = src.getEnergy();
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Diamond name: " << this->_name << std::endl;
	std::cout << "Clap name: " << ClapTrap::_name << "_clap_name" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called:" << this->_name << std::endl;
}