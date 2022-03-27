#include "DiamondTrap.hpp"

int	main(void)
{
	std::cout << "--- Constructors ---\n" << std::endl;

	DiamondTrap	test("test");
	DiamondTrap	bug("bug");

	std::cout << std::endl << "--- Attaks ---\n" << std::endl;

	test.attack("bug");
	bug.takeDamage(test.getDamage());
	test.attack("bug");
	bug.takeDamage(test.getDamage());

	std::cout << std::endl << "--- Who I am function ---\n" << std::endl;
	test.whoAmI();

	std::cout << std::endl << "--- Destructors --- \n" << std::endl;

	return (0);
}