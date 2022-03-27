#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"
class Form;

class Bureaucrat {
    public:
        Bureaucrat(void);
        Bureaucrat(Bureaucrat const &src);
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat(void);

        Bureaucrat  &operator=(Bureaucrat const &src);
        int         operator++(int);
        int         operator--(int);

        const std::string   getName(void) const;
        int                 getGrade(void) const;
        void                setGrade(int new_grade);
        void                signeForm(Form &form) const;

    private:
        const std::string   _name;
        int                 _grade;

	class GradeTooHighException: public std::exception {
		public:
			virtual const char *what() const throw ()
			{
				return ("The grad is too hight");
			}
	};

	class GradeTooLowException: public std::exception {
		public:
			virtual const char *what() const throw ()
			{
				return ("The grad is too low");
			}
	};
};

std::ostream     &operator<<(std::ostream &o, Bureaucrat const &src);

#endif