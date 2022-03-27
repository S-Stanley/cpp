#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*to_return = new Zombie();

	to_return->set_name(name);
	return (to_return);
}