#include "Data.hpp"

Data::Data(void)
{
    std::cout << "Data constructor called" << std::endl;
}

Data::Data(Data const &src)
{
    std::cout << "Data copy constructor called" << std::endl;
    *this = src;
}

Data    &Data::operator=(Data const &src)
{
    std::cout << "Data copy constructor called" << std::endl;
    this->_name = src.getName();
    return (*this);
}

std::string Data::getName(void) const
{
    return (this->_name);
}

void        Data::setName(std::string name)
{
    this->_name = name;
}

Data::~Data(void)
{
    std::cout << "Data destructor called" << std::endl;
}