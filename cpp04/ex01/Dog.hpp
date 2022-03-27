#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
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