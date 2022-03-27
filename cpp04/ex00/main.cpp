#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"

// int	main(void)
// {
// 	Cat	cat;
// 	Dog dog;

// 	std::cout << "Cat type: " << cat.getType() << std::endl;
// 	std::cout << "Dog type: " << dog.getType() << std::endl;

// 	std::cout << "Cat noise: " << std::endl;
// 	cat.makeSound();
// 	std::cout << "Dog noise: " << std::endl;
// 	dog.makeSound();

// 	return (0);
// }

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	
	return 0;
}







// #include "WrongDog.hpp"
// #include "WrongCat.hpp"

// int main()
// {
// 	const WrongAnimal* meta = new WrongAnimal();
// 	const WrongAnimal* j = new WrongDog();
// 	const WrongAnimal* i = new WrongCat();

// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound();
// 	j->makeSound();
// 	meta->makeSound();
	
// 	return 0;
// }