#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): _name(""), _target(""), _grad_sign(72), _grad_exec(45), _is_signed(false)
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src): _name(src.getName()), _target(src.getTarget()), _grad_sign(src.getGradSign()), _grad_exec(src.getGradExec()), _is_signed(false)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): _name("RobotomyRequestForm"), _target(target), _grad_sign(72), _grad_exec(45), _is_signed(false)
{
	std::cout << "RobotomyRequestForm custom constructor called" << std::endl;
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void		RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try 
	{
		if (executor.getGrade() > this->_grad_exec)
			throw Form::GradeTooLowException();
		std::cout << "Bizzz bizz" << std::endl;
		if (std::rand() % 2)
			std::cout << this->_target << " has been robotised" << std::endl;
		else
			std::cout << this->_target << " operation failed" << std::endl;
		std::cout << "Bureaucrat " << executor.getName() << " executed " << this->_name << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << "Bureaucrat " << executor.getName() << " cannot execute " << this->_name << " because: " << e.what() << std::endl;
	}
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm default destructor called" << std::endl;
}
