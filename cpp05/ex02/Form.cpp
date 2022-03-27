#include "Form.hpp"

Form::Form(void): _name("paper"), _grad_sign(10), _grad_exec(20), _is_signed(false)
{
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, int sign, int exec): _name(name), _grad_sign(sign), _grad_exec(exec), _is_signed(false)
{
    std::cout << "Form custom constructor called" << std::endl;
}

Form::Form(Form const &src): _name("paper"), _grad_sign(10), _grad_exec(20), _is_signed(false)
{
    (void)src;
    std::cout << "Form copy constructor called" << std::endl;
}

Form            &Form::operator=(Form const &src)
{
    std::cout << "Form copy constructor called" << std::endl;
    this->_is_signed = src.getIsSigned();
    return (*this);
}

std::string     Form::getName(void) const
{
    return (this->_name);
}

bool            Form::getIsSigned(void) const
{
    return (this->_is_signed);
}

int             Form::getGradSign(void) const
{
    return (this->_grad_sign);
}

int             Form::getGradExec(void) const
{
    return (this->_grad_exec);
}

void            Form::beSigned(Bureaucrat const &src)
{
	try
	{
		if (src.getGrade() > this->getGradSign())
			throw Form::GradeTooLowException();
		if (src.getGrade() < 1)
			throw Form::GradeTooHighException();
		if (src.getGrade() > 150)
			throw Form::GradeTooLowException();
		this->_is_signed = true;
		std::cout << "Form signed successfully" << std::endl;
		std::cout << src.getName() << " signed " << this->getName() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
	    std::cout << src.getName() << " couldn't sign " << this->getName() << " because: " << e.what() << std::endl;
	}
	catch (Form::GradeTooHighException &e)
	{
	    std::cout << src.getName() << " couldn't sign " << this->getName() << " because: " << e.what() << std::endl;
	}
}

Form::~Form(void)
{
    std::cout << "Form destructor called" << std::endl;
}

std::ostream        &operator<<(std::ostream &o, Form const &src)
{
    o << "Form: "<< src.getName() << " need " << src.getGradSign() << " to be signed and " << src.getGradExec() << " to be executed. Actual state: " << src.getIsSigned();
    return (o);
}