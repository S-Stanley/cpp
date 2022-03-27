#include "Span.hpp"

Span::Span(void): _max_num(0)
{
	std::cout << "Span default constructor called" << std::endl;
}

Span::Span(unsigned int N): _max_num(N)
{
	std::cout << "Span N constructor called" << std::endl;
}

Span::Span(Span const &src)
{
	std::cout << "Span copy constructor called" << std::endl;
	*this = src;
}

Span	&Span::operator=(Span const &src)
{
	std::cout << "Span operator affectation called" << std::endl;
	this->_num = src._num;
	this->_max_num = src._max_num;
	return (*this);
}

void	Span::addNumber(int num)
{
	if (this->_num.size() >= this->_max_num)
		throw std::out_of_range("Cannot add new element anymore");
	this->_num.push_back(num);
}

int		Span::shortestSpan(void) const
{
	if (this->_num.size() < 2)
		std::out_of_range("There is no number, shortest span cannot be found");
	int	min = static_cast<int>(abs(this->_num.at(0) - this->_num.at(1)));
	for (size_t i = 0; i < this->_num.size(); i++)
	{
		if (i < 2)
			continue;
		if (abs(this->_num.at(i) - this->_num.at(i - 1)) < min)
			min = abs(this->_num.at(i) - this->_num.at(i - 1));
	}
	return (min);
}

int		Span::longestSpan(void) const
{
	if (this->_num.size() < 2)
		std::out_of_range("There is no number, longuest span cannot be found");
	return *std::max_element(this->_num.begin(), this->_num.end()) - *std::min_element(this->_num.begin(), this->_num.end());
}

void	Span::addALotOfNumbers(unsigned int N)
{
	std::vector<int>	vec(N, 42);

	this->_num = vec;
	this->_num.at(0) = 24;
	this->_num.at(24) = 15;
}

Span::~Span(void)
{
	std::cout << "Span destructor called" << std::endl;
}