#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <fstream>

class PresidentialPardonForm: public Form {
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm(void);		

		PresidentialPardonForm	&operator=(PresidentialPardonForm const &src);

		void				execute(Bureaucrat const & executor) const;
		std::string			getTarget(void) const;

    private:
        const std::string   _name;
		std::string			_target;
        const int           _grad_sign;
        const int           _grad_exec;
        bool                _is_signed;
};

#endif