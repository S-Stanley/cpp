#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal {
	public:
		Cat(void);
		Cat(Cat const &src);
		~Cat(void);

		Cat			&operator=(Cat const &src);

		std::string	getType(void) const;
		void		makeSound(void) const;

	private:
		Brain	*_brain;
};

#endif