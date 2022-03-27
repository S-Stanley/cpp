#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): _name("PresidentialPardon"), _target(""), _grad_sign(25), _grad_exec(5), _is_signed(false)
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src): _name(src.getName()), _target(src.getTarget()), _grad_sign(src.getGradSign()), _grad_exec(src.getGradExec()), _is_signed(false)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): _name("PresidentialPardon"), _target(target), _grad_sign(25), _grad_exec(5), _is_signed(false)
{
	std::cout << "PresidentialPardonForm custom constructor called" << std::endl;
}

std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void		PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try 
	{
		if (executor.getGrade() > this->_grad_exec)
			throw Form::GradeTooLowException();
		std::cout << this->_target << " has been pardonated by Zaphod Beeblebrox" << std::endl;
		std::cout << "Bureaucrat " << executor.getName() << " executed " << this->_name << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << "Bureaucrat " << executor.getName() << " cannot execute " << this->_name << " because: " << e.what() << std::endl;
	}
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm default destructor called" << std::endl;
}