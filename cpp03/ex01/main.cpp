#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	snow("JohnSnow");
	ScavTrap	doe("JohnDoe");

	snow.attack("JohnDoe");
	doe.takeDamage(snow.getDamage());
	snow.attack("JohnDoe");
	doe.takeDamage(snow.getDamage());

	doe.attack("JohnDoe");
	snow.takeDamage(doe.getDamage());

	snow.guardGate();
	return (0);
}