#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal {
	public:
		Dog(void);
		Dog(Dog const &src);
		~Dog(void);

		Dog			&operator=(Dog const &src);

		std::string	getType(void) const;
		void		makeSound(void) const;
	private:
		Brain	*_brain;
};

#endif