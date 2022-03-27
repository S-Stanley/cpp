#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongDog: public WrongAnimal {
	public:
		WrongDog(void);
		WrongDog(WrongDog const &src);
		~WrongDog(void);

		WrongDog			&operator=(WrongDog const &src);

		std::string	getType(void) const;
		void		makeSound(void) const;
};

#endif