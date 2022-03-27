#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
	public:
		Brain(void);
		Brain(Brain const &src);
		~Brain(void);

		Brain	&operator=(Brain const &src);

		std::string	getIdea(int i) const;
		void		setIdea(int i, std::string value);

	protected:
		std::string	ideas[100];
};

#endif