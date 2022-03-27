#include "Zombie.hpp"

int	main(void)
{
	std::string	name = "hello";
	Zombie		*zombies;
	int			nb = 7;

	zombies = zombieHorde(nb, name);

	for (int i = 0; i < nb; i++)
	{
		zombies[i].annonce();
	}
	delete [] zombies;
	return (0);
}