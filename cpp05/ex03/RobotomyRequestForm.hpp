#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <fstream>
#include <random>
#include <tgmath.h>

class RobotomyRequestForm: public Form {
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm(void);		

		RobotomyRequestForm	&operator=(RobotomyRequestForm const &src);

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