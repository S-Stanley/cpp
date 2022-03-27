#include <iostream>
#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main(void)
{

    Data       test;

    test.setName("hello world");

    std::cout << &test << " " << test.getName() << " " << std::endl;
    std::cout << deserialize(serialize(&test)) << std::endl;
    std::cout << &test << " " << test.getName() << " " << std::endl;
    return (0);
}