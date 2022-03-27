#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	return ;
}

bool	PhoneBook::add(void)
{
	for (int i = 0; i < 8; i++)
	{
		if (this->_contact[i].is_empty())
		{
			if (!this->_contact[i].create())
				return (false);
			return (true);
		}
	}
	if (!this->_contact[0].create())
		return (false);
	return (true);
}

std::string	PhoneBook::trunc_to_size(std::string str)
{
	int			space_to_write;
	std::string	s2;

	if (str.length() < 10)
	{
		s2 = "";
		space_to_write = 10 - str.length();
		while (space_to_write > 0)
		{
			s2.append(" ");
			space_to_write--;
		}
		return (s2.append(str));
	}
	str = str.substr(0, 9);
	return (str.append("."));
}

void	PhoneBook::search(void)
{
	std::string	index;


	if (this->_contact[0].is_empty())
	{
		std::cout << "There is no data, please start by entering a contact" << std::endl;
		return ;
	}
	std::cout << trunc_to_size("index") << "|";
	std::cout << trunc_to_size("first name") << "|";
	std::cout << trunc_to_size("last name") << "|";
	std::cout << trunc_to_size("nickname") << "|";
	std::cout << std::endl;
	for (int i = 0; i < 8; i++)
		this->_contact[i].read_values(i);
	std::cout << "Please, enter an index:" << std::endl;
	std::getline(std::cin, index);
	if (std::cin.eof())
		return ;
	if (
		index.length() > 1
		|| (index[0] - '0') < 0
		|| (index[0] - '0') > 7
		|| this->_contact[index[0] - '0'].is_empty())
	{
		std::cout << "Index out of range.. aborting" << std::endl;
		return ;
	}
	this->_contact[index[0] - '0'].read_contact_info();
}

PhoneBook::~PhoneBook(void)
{
	return ;
}
