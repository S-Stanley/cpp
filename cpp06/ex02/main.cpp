#include "Base.hpp"
#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"

Base    *generate(void)
{
    std::srand(static_cast<unsigned int>(time(NULL)));

    switch (std::rand() % 3)
    {
        case 0:
            std::cout << "choose A" << std::endl;
            return (new A);
            break ;
        case 1:
            std::cout << "choose B" << std::endl;
            return (new B);
            break ;
        case 2:
            std::cout << "choose C" << std::endl;
            return (new C);
            break ;
    }
    return (NULL);
}

void identify(Base *p)
{
    std::cout << "identify with pts" << std::endl;
    if (dynamic_cast<A *>(p))
    {
        std::cout << "p is type: " << "A" << std::endl;
        return ;
    }
    if (dynamic_cast<B *>(p))
    {
        std::cout << "p is type: " << "B" << std::endl;
        return ;
    }
    if (dynamic_cast<C *>(p))
    {
        std::cout << "p is type: " << "C" << std::endl;
        return ;
    }
    std::cout << "Cannot find type of p" << std::endl;
}

void identify(Base &p)
{
    std::cout << "identify with ref" << std::endl;
    try
    {
        dynamic_cast<A &>(p);
        std::cout << "p is type: " << "A" << std::endl;
        return ;
    }
    catch (std::bad_cast &e){}
    try
    {
        dynamic_cast<B &>(p);
        std::cout << "p is type: " << "B" << std::endl;
        return ;
    }
    catch (std::bad_cast &e){}
    try
    {
        dynamic_cast<C &>(p);
        std::cout << "p is type: " << "C" << std::endl;
        return ;
    }
    catch (std::bad_cast &e){}
    std::cout << "Cannot find type of p" << std::endl;
}

int     main(void)
{
    Base    *test = generate();
    Base    &ref = *test;

    identify(test);
    identify(ref);

    delete test;
    return (0);
}