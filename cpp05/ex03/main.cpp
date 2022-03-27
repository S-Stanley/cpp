#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include <iostream>

int main(void)
{
	std::cout << "--- Constructor ---" << std::endl << std::endl;

	Intern		someRandomIntern;
	Form		*rrf;
	Bureaucrat	director("director", 5);

	std::cout << std::endl << "--- Create form ---" << std::endl << std::endl;

	rrf = someRandomIntern.makeForm("robotomy redquest", "Bender");
	if (!rrf)
	{
		std::cout << std::endl << "--- Destructor ---" << std::endl << std::endl;
		delete rrf;
		return (0);
	}

	std::cout << std::endl << "--- Execute form ---" << std::endl << std::endl;

	director.signeForm(*rrf);

	std::cout << std::endl << "--- Destructor ---" << std::endl << std::endl;
	delete rrf;
    
	return  (0);
}
