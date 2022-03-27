#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_integer = 0;
	return ;
}

Fixed::Fixed(const Fixed &src)
{
	*this = src;
	return ;
}

Fixed::Fixed(const int integer)
{
	this->setRawsBits(integer * (1 << this->_fraction));
	return ;
}

Fixed::Fixed(const float floatNb)
{
	this->setRawsBits(roundf(floatNb * (1 << this->_fraction)));
}

Fixed	&Fixed::operator=(const Fixed &src)
{
	this->_integer = src.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->_integer);
}

int	Fixed::setRawsBits(int const raw)
{
	this->_integer = raw;
	return (this->_integer);
}

float	Fixed::toFloat(void) const
{
	float	to_return;

	to_return = (float)this->getRawBits() / (1 << this->_fraction);
	return (to_return);
}

int		Fixed::toInt(void) const
{
	int		to_return;

	to_return = this->getRawBits() / (1 << this->_fraction);
	return (to_return);
}

Fixed::~Fixed(void)
{
	return ;
}

Fixed	Fixed::operator+(const Fixed &src)
{
	return Fixed(this->toFloat() + src.toFloat());
}

Fixed	Fixed::operator-(const Fixed &src)
{
	return Fixed(this->toFloat() - src.toFloat());
}

Fixed	Fixed::operator*(const Fixed &src)
{
	return Fixed(this->toFloat() * src.toFloat());
}

Fixed	Fixed::operator/(const Fixed &src)
{
	return Fixed(this->toFloat() / src.toFloat());
}

bool	Fixed::operator>(const Fixed &src)
{
	return (src.getRawBits() > this->getRawBits());
}

bool	Fixed::operator<(const Fixed &src)
{
	return (src.getRawBits() < this->getRawBits());
}

bool	Fixed::operator>=(const Fixed &src)
{
	return (src.getRawBits() >= this->getRawBits());
}

bool	Fixed::operator<=(const Fixed &src)
{
	return (src.getRawBits() <= this->getRawBits());
}

bool	Fixed::operator==(const Fixed &src)
{
	return (src.getRawBits() == this->getRawBits());
}

bool	Fixed::operator!=(const Fixed &src)
{
	return (src.getRawBits() != this->getRawBits());
}

Fixed	&Fixed::operator++(void)
{
	this->_integer++;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	this->_integer--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;

	++*this;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;

	--*this;
	return (tmp);
}

Fixed	const &Fixed::min(Fixed const &f1, Fixed const &f2)
{
	if (f1.toFloat() < f2.toFloat())
		return (f1);
	return (f2);
}

Fixed 	&Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1.toFloat() < f2.toFloat())
		return (f1);
	return (f2);
}

Fixed	&Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1.toFloat() > f2.toFloat())
		return (f1);
	return (f2);
}

Fixed	const &Fixed::max(Fixed const &f1, Fixed const &f2)
{
	if (f1.toFloat() > f2.toFloat())
		return (f1);
	return (f2);
}

std::ostream	&operator<<(std::ostream &o, const Fixed &src)
{
	o << src.toFloat();
	return (o);
}