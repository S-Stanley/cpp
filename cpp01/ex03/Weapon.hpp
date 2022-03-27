#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {
	public:
		Weapon(std::string name);
		~Weapon(void);
		const std::string &getType(void);
		void		setType(std::string new_value);
	private:
		std::string _type;
};

#endif