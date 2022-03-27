#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"

template <typename T>

class Array {
	public:
		Array(void): _tab(NULL), _size(0)
		{
			std::cout << "Array default constructor called" << std::endl;
		}
		Array(unsigned int n)
		{
			this->_tab = new T[n];

			std::cout << "Array unsigned int constructor called" << std::endl;
			for (unsigned int i = 0; i < n; i++)
				_tab[n] = 0;
			this->_size = n;
		}
		Array(Array const &src)
		{
			this->_tab = new T[src.size()];

			std::cout << "Copy constructor called" << std::endl;
			for (int i = 0; static_cast<unsigned int>(i) < src.size(); i++)
				this->_tab[i] = src._tab[i];
			this->_size = src.size();
		}
		virtual ~Array(void)
		{
			std::cout << "Array destructor called" << std::endl;
		}
		Array			&operator=(Array const &src)
		{
			this->_tab = new T[src.size()];

			for (int i = 0; i < src.size(); i++)
				this->_tab[i] = src._tab[i];
			this->_size = src.size();
		}
		T				&operator[](int i) const
		{
			if (static_cast<unsigned int>(i) > this->_size)
				throw std::out_of_range("index out of range");
			return (this->_tab[i]);
		}
		unsigned int	size(void) const
		{
			return (this->_size);
		};

	private:
		T				*_tab;
		unsigned int	_size;
};

#endif