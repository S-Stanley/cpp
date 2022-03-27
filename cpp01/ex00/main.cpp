#include "Zombie.hpp"

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

int	main(void)
{
	randomChump("stack");
	Zombie *zombie = newZombie("heap");
	zombie->annonce();
	delete zombie;
	return (0);
}