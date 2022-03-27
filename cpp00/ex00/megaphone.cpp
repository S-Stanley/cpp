#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; argv[i] ; i++)
	{		
		for (int x = 0; argv[i][x]; x++)
		{
			if (argv[i][x] >= 'a' && argv[i][x] <= 'z')
			{
				std::cout << (char)toupper(argv[i][x]);
			}
			else
				std::cout << argv[i][x];
		}
	}
	std::cout << std::endl;
	return (0);
}