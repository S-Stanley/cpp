#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal {
	public:
		AAnimal(void);
		AAnimal(AAnimal const &src);
		virtual ~AAnimal(void);

		AAnimal			&operator=(AAnimal const &src);

		virtual std::string		getType(void) const = 0;
		virtual void	makeSound(void) const = 0;

	protected:
		std::string	type;
};

#endif