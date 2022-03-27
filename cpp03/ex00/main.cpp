#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	snow("JohnSnow");
	ClapTrap	doe("JohnDoe");

	snow.attack("JohnDoe");
	doe.takeDamage(snow.getDamage());
	snow.attack("JohnDoe");
	doe.takeDamage(snow.getDamage());

	doe.attack("JohnDoe");
	snow.takeDamage(doe.getDamage());
	return (0);
}