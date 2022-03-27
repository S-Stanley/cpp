#ifndef HUMAINB_HPP
# define HUMAINB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string name);
		~HumanB();
		void	attack(void);
		void	setWeapon(Weapon &arme);
	private:
		std::string	_name;
		Weapon		*_arme;
};

#endif