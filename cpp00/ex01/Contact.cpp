#include "Contact.hpp"

Contact::Contact(void)
{
	this->_firstname = "";
	this->_name = "";
	this->_nickname = "";
	this->_phone = "";
	this->_secret = "";
	return ;
}

std::string	Contact::trunc_to_size(std::string str)
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

std::string	create_string_from_char(int id)
{
	std::string	to_return;

	to_return = "";
	to_return.push_back(id + '0');
	return (to_return);
}

void	Contact::read_values(int id)
{
	if (this->_firstname.compare("") == 0)
		return ;
	std::cout << trunc_to_size(create_string_from_char(id)) << "|";
	std::cout << trunc_to_size(this->_firstname) << "|";
	std::cout << trunc_to_size(this->_name) << "|";
	std::cout << trunc_to_size(this->_nickname) << "|";
	std::cout << std::endl;
}

bool	Contact::is_empty(void)
{
	if (this->_firstname.compare("") == 0)
		return (true);
	return (false);
}

bool	Contact::create(void)
{
	std::cout << "Enter first name" << std::endl;
	while (this->_firstname.compare("") == 0)
	{
		std::getline(std::cin, this->_firstname);
		if (std::cin.eof())
			return (false);
	}
	std::cout << "Last name" << std::endl;
	while (this->_name.compare("") == 0)
	{
		std::getline(std::cin, this->_name);
		if (std::cin.eof())
			return (false);
	}
	std::cout << "Nickname" << std::endl;
	while (this->_nickname.compare("") == 0)
	{
		std::getline(std::cin, this->_nickname);
		if (std::cin.eof())
			return (false);	
	}
	std::cout << "Phone number" << std::endl;
	while (this->_phone.compare("") == 0)
	{
		std::getline(std::cin, this->_phone);
		if (std::cin.eof())
			return (false);			
	}
	std::cout << "Darkest secret" << std::endl;
	while (this->_secret.compare("") == 0)
	{
		std::getline(std::cin, this->_secret);
		if (std::cin.eof())
			return (false);
	}
	return (true);
}

void	Contact::read_contact_info(void)
{
	std::cout << "First name: " << this->_firstname << std::endl;
	std::cout << "Last name: " << this->_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phone << std::endl;
	std::cout << "Darkest secret: " << this->_secret << std::endl;
}

Contact::~Contact(void)
{
	return ;
}