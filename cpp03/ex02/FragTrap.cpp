#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap default constructor called" << std::endl;
	ClapTrap::_hitPts = 100;
	ClapTrap::_energyPts = 100;
	ClapTrap::_attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap name constructor called: " << name << std::endl;
	ClapTrap::_hitPts = 100;
	ClapTrap::_energyPts = 100;
	ClapTrap::_attackDamage = 30;
	ClapTrap::_name = name;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}

FragTrap	&FragTrap::operator=(FragTrap const &src)
{
	std::cout << "FragTrap Surcharge operator called" << std::endl;
	this->_name = src.getName();
	this->_attackDamage = src.getDamage();
	this->_hitPts = src.getHits();
	this->_energyPts = src.getEnergy();
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << ": Hey! Can we do a High Five ?" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called:" << this->_name << std::endl;
}