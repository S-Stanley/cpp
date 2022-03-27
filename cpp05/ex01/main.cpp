#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void)
{
    Bureaucrat  test("John Snow", 5);
    Form        form("contrat", 10, 10);

    std::cout << std::endl;

    std::cout << test << std::endl;
    test.signeForm(form);

    std::cout << std::endl;
    test.setGrade(140);
    test.signeForm(form);

    std::cout << std::endl;
    return (0);
}