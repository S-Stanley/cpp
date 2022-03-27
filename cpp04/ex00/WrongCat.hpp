#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
	public:
		WrongCat(void);
		WrongCat(WrongCat const &src);
		~WrongCat(void);

		WrongCat			&operator=(WrongCat const &src);

		std::string	getType(void) const;
		void		makeSound(void) const;
};

#endif