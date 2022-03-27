#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form {
    public:
        Form(void);
        Form(std::string name, int sign, int exec);
        Form(Form const &src);
        ~Form(void);

        Form                &operator=(Form const &src);

        std::string         getName(void) const;
        bool                getIsSigned(void) const;
        int                 getGradSign(void) const;
        int                 getGradExec(void) const;
        void                beSigned(Bureaucrat const &src);

    private:
        const std::string   _name;
        const int           _grad_sign;
        const int           _grad_exec;
        bool                _is_signed;

	class GradeTooHighException: public std::exception {
		public:
			virtual const char *what() const throw ()
			{
				return ("Bureaucrat grad is out of scope");
			}
	};
	class GradeTooLowException: public std::exception {
		public:
			virtual const char *what() const throw ()
			{
				return ("Insufficient grad to exec or sign the form");
			}
	};

};

std::ostream    &operator<<(std::ostream &o, Form const &src);

#endif