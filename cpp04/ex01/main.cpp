#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

// int main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	delete j;//should not create a leak
// 	delete i;
// 	return 0;
// }

int	main(void)
{
	int		total = 4;
	Animal	*animal[total];

	for (int i = 0; i < total; i++)
	{
		if (i < (total / 2))
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}

	std::cout << std::endl << "--- Destruction ---" << std::endl << std::endl;

	for (int i = 0; i < total; i++)
		delete animal[i];
	return (0);
}