#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include <iostream>

int main(void)
{
    std::cout << "--- Constructors ---" << std::endl;
    std::cout << std::endl;

    Bureaucrat  JohnSnow("JohnSnow", 150);
    Form        *SCF = new PresidentialPardonForm("tar");

    std::cout << std::endl << "--- Section 0 ---" << std::endl;
    std::cout << std::endl;

    JohnSnow.executeForm(*SCF);

    std::cout << std::endl << "--- Section 1 ---" << std::endl;
    std::cout << std::endl;

    JohnSnow.signeForm(*SCF);

    std::cout << std::endl << "--- Section 2 ---" << std::endl;
    std::cout << std::endl;

    JohnSnow.setGrade(5);
    JohnSnow.executeForm(*SCF);
    JohnSnow.executeForm(*SCF);
    JohnSnow.executeForm(*SCF);
    JohnSnow.executeForm(*SCF);

    std::cout << std::endl << "--- Section 3 ---" << std::endl;
    std::cout << std::endl;

    JohnSnow.signeForm(*SCF);

    std::cout << std::endl << "--- Destructors ---" << std::endl;
    std::cout << std::endl;

    delete SCF;
    return  (0);
}
