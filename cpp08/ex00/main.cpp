#include <iostream>
#include <vector>
#include <algorithm>
#include "easyfind.hpp"

int	main(void)
{
	std::vector<int>	vec;

	vec.push_back(15);
	vec.push_back(42);
	vec.push_back(24);

	std::cout << "index existant: "<< *(easyfind(vec, 42)) << std::endl;
	try
	{
		std::cout << "index inexistant: "<< *(easyfind(vec, 5)) << std::endl;
	}
	catch (std::out_of_range &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}