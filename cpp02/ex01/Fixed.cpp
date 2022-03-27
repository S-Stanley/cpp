#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_integer = 0;
	return ;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawsBits(integer * (1 << this->_fraction));
	return ;
}

Fixed::Fixed(const float floatNb)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawsBits(roundf(floatNb * (1 << this->_fraction)));
}

Fixed	&Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
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

	to_return = (int)this->getRawBits() / (1 << this->_fraction);
	return (to_return);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

std::ostream	&operator<<(std::ostream &o, const Fixed &src)
{
	o << src.toFloat();
	return (o);
}