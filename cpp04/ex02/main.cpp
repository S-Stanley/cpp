#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "AAnimal.hpp"

int main()
{
	// AAnimal	test;
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	return (0);
}