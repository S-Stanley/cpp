#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	snow("JohnSnow");
	ScavTrap	doe("JohnDoe");

	snow.attack("JohnDoe");
	doe.takeDamage(snow.getDamage());
	snow.attack("JohnDoe");
	doe.takeDamage(snow.getDamage());

	doe.attack("JohnDoe");
	snow.takeDamage(doe.getDamage());
	return (0);
}