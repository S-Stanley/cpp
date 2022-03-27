#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(int argc, char **argv)
{
	std::string	command;
	PhoneBook	book;

	(void)argv;
	if (argc != 1)
	{
		std::cout << "Wrong usage" << std::endl;
		return (0);
	}
	while (true)
	{
		std::cout << "Enter a command (ADD, SEARCH or EXIT)" << std::endl;
		std::getline(std::cin, command);
		if (std::cin.eof())
			return (1);
		if (command.compare("ADD") == 0)
		{
			if (!book.add())
				return (1);
		}
		else if (command.compare("SEARCH") == 0)
			book.search();
		else if (command.compare("EXIT") == 0)
			break ;
		else
			std::cout << "Wrong command" << std::endl;
	}

	return (0);
}