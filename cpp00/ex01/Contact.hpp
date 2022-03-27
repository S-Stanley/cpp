#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
	public:
		Contact(void);
		~Contact(void);
		void		read_values(int id);
		bool		is_empty(void);
		bool		create(void);
		std::string	trunc_to_size(std::string str);
		void		read_contact_info(void);

	private:
		std::string	_firstname;
		std::string	_name;
		std::string	_nickname;
		std::string	_phone;
		std::string	_secret;
};

#endif