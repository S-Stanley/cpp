#ifndef HUMAINA_HPP
# define HUMAINA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string name, Weapon &arme);
		~HumanA();
		void	attack(void);
	private:
		std::string	_name;
		Weapon		&_arme;
};

#endif