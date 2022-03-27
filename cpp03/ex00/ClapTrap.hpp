#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	public:
		ClapTrap(void);
		ClapTrap(ClapTrap const &src);
		ClapTrap(std::string name);
		~ClapTrap(void);

		ClapTrap		&operator=(ClapTrap const &src);

		void			attack(const std::string &target);
		void			takeDamage(unsigned int amout);
		void			beRepaired(unsigned int amount);

		std::string		getName(void) const;
		unsigned int	getHits(void) const;
		unsigned int	getEnergy(void) const;
		unsigned int	getDamage(void) const;

	private:
		std::string		_name;
		unsigned int	_hitPts;
		unsigned int	_energyPts;
		unsigned int	_attackDamage;
};

#endif