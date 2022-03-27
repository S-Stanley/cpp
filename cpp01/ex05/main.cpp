#include "Karen.hpp"

int	main(int ac, char **av)
{
	Karen 		karen;
	std::string	opt;

	if (ac > 2)
		return (0);
	if (ac == 1)
		karen.complain("DEBUG");
	else
	{
		opt = av[1];
		karen.complain(av[1]);
	}
	return (0);
}