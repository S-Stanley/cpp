#include <iostream>
#include <stdlib.h>
#include "iter.hpp"

int		return_int(void)
{
	srand(time(NULL));
	return (std::rand() % 10);
}

int	main(void)
{
	int	tab[5] = {0};

	iter(tab, 5, return_int);
	for (int i = 0; i < 5; i++)
		std::cout << tab[i] << std::endl;
	return (0);
}