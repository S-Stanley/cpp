#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	public:
		Fixed(void);
		Fixed(const Fixed &src);
		Fixed(const int integer);
		Fixed(const float floatNb);
		~Fixed(void);

		Fixed			&operator=(Fixed const &src);

		int				getRawBits(void) const;
		int				setRawsBits(int const raw);
		float			toFloat(void) const;
		int				toInt(void) const;
	private:
		int					_integer;
		static const int	_fraction = 8;
};

std::ostream	&operator<<(std::ostream &o, const Fixed &src);

#endif