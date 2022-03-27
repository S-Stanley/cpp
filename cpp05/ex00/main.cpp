#include "Bureaucrat.hpp"
#include <iostream>

// int main(void)
// {
//     Bureaucrat  test("hello", 10);
//     std::cout << std::endl;

//     Bureaucrat  test1("hello", 0);
//     std::cout << std::endl;

//     Bureaucrat  test2("hello", 150);
//     std::cout << std::endl;

//     Bureaucrat  test3("hello", -5);
//     std::cout << std::endl;

//     Bureaucrat  test4("hello", 200);

//     std::cout << std::endl;

//     return (0);
// }

int main(void)
{
    Bureaucrat inc("inc", 1);
    Bureaucrat inc2("inc2", 150);

    std::cout << std::endl;

    std::cout << inc << std::endl;
    inc--;
    std::cout << inc << std::endl;
    inc++;
    std::cout << inc << std::endl;

    std::cout << std::endl;    

    std::cout << inc2 << std::endl;
    inc2++;
    std::cout << inc2 << std::endl;
    inc2--;
    std::cout << inc2 << std::endl;

    std::cout << std::endl;

    return (0);
}