#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name(""), _hitPts(10), _energyPts(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Copy Constructor called " << std::endl;
	*this = src;
	return ;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPts(10), _energyPts(10), _attackDamage(0)
{
	std::cout << "Constructeur of " << name << " called" << std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap Surcharge operator called" << std::endl;
	this->_name = src.getName();
	this->_attackDamage = src.getDamage();
	this->_hitPts = src.getHits();
	this->_energyPts = src.getEnergy();
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energyPts == 0)
	{
		std::cout << this->getName() << " has no more energy" << std::endl;
		return ;
	}
	std::cout << this->_name << " attaks " << target << " causing " << this->_attackDamage << " points of damage" <<std::endl;
	this->_energyPts--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " got " << amount << " of damage " << std::endl;
	if (this->_hitPts <= amount)
	{
		std::cout << "hits from " << this->_name << " is now at zero" << std::endl;
		this->_hitPts = 0;
		return ;
	}
	this->_hitPts -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPts == 0)
	{
		std::cout << this->_name << " has no more energy" << std::endl;
		return ;
	}
	std::cout << this->_name << " is being repared of " << amount << std::endl; 
	this->_hitPts += amount;
	this->_energyPts--;
}

std::string	ClapTrap::getName(void) const
{
	std::cout << "getting the name of ClapTrap" << std::endl;
	return (this->_name);
}

unsigned int	ClapTrap::getDamage(void) const
{
	std::cout << "ClapTrap getting damage of " << this->_name << std::endl;
	return (this->_attackDamage);
}

unsigned int	ClapTrap::getHits(void) const
{
	std::cout << "ClapTrap getting hits of " << this->_name << std::endl;
	return (this->_hitPts);
}

unsigned int	ClapTrap::getEnergy(void) const
{
	std::cout << "ClapTrap getting energy of " << this->_name << std::endl;
	return (this->_energyPts);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructeur of " << this->_name << " called" << std::endl;
	return ;
}