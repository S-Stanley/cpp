#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <map>

class Karen {
	public:
		Karen(void);
		~Karen(void);
		void	complain(std::string level);
		int		find_equivalent(std::string level);
	private:
		typedef void	(Karen::*pts)();
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		pts		_tab[4];
};

#endif
