#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	public:
		Fixed(void);
		Fixed(const Fixed &src);
		~Fixed(void);

		int		getRawBits(void) const;
		int		setRawsBits(int const raw);
		Fixed	&operator=(Fixed const &src);
	private:
		int					_integer;
		static const int	_fraction = 8;
};

#endif