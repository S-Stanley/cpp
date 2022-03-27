#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): _name(""), _target(""), _grad_sign(145), _grad_exec(137), _is_signed(false)
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src): _name(src.getName()), _target(src.getTarget()), _grad_sign(src.getGradSign()), _grad_exec(src.getGradExec()), _is_signed(false)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): _name("ShrubberyCreationForm"), _target(target), _grad_sign(145), _grad_exec(137), _is_signed(false)
{
	std::cout << "ShrubberyCreationForm custom constructor called" << std::endl;
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream	outfile;
	std::string		new_name = this->_target;

	try 
	{
		if (executor.getGrade() > this->_grad_exec)
			throw Form::GradeTooLowException();
		new_name.append("_shrubbery");
		std::cout << "executing ShrubberyCreationForm" << std::endl;
		outfile.open(new_name);
		if (outfile.fail())
		{
			std::cout << "Cannot open " << new_name << std::endl;
			return ;
		}
		outfile << "    .    " << std::endl;
		outfile << "   ...   " << std::endl;
		outfile << "  .....  " << std::endl;
		outfile << " ....... " << std::endl;
		outfile << ".........";
		std::cout << "Bureaucrat " << executor.getName() << " executed " << this->_name << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << "Bureaucrat " << executor.getName() << " cannot execute " << this->_name << " because: " << e.what() << std::endl;
	}
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm default destructor called" << std::endl;
}
