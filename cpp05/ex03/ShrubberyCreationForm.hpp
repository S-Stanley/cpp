#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm: public Form {
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm(void);		

		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &src);

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