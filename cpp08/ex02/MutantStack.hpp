#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <algorithm>

template <typename T>
class MutantStack: public std::stack<T> {
    public:
        MutantStack(void)
        {
            std::cout << "MutantStack default constructor called" << std::endl;
        }

        MutantStack(MutantStack const &src)
        {
            std::cout << "MutantStack default constructor called" << std::endl;
            *this = src;
        }

        virtual ~MutantStack(void)
        {
            std::cout << "MutantStack default constructor called" << std::endl;
        }

        MutantStack     &operator=(MutantStack const &src)
        {
            std::cout << "MutantStack operator affectation called" << std::endl;
            (void)src;
            return (*this);
        }

        typedef typename    MutantStack<T>::container_type::iterator     iterator;
        iterator             begin(void)
        {
            return (MutantStack<T>::c.begin());
        }
        iterator             end(void)
        {
            return (MutantStack<T>::c.end());
        }
};

#endif