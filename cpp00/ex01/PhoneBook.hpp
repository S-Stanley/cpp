#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include "iostream"

class PhoneBook {

	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	search(void);
		bool	add(void);

	private:
		Contact _contact[8];
		std::string	trunc_to_size(std::string str);
};

#endif