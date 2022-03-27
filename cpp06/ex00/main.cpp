#include <iostream>
#include <cstdlib>

#define CHAR_TYPE	0
#define INT_TYPE	1
#define FLOAT_TYPE	2
#define DOUBLE_TYPE	3
#define SPECIAL		4

int		getType(std::string target)
{
	std::string dtype[] = { "nanf", "nan", "inf", "+inf", "-inf", "-inff", "+inff", "inff", "inf" };

	for (int x = 0; x < 9; x++)
	{
		if (target.compare(dtype[x]) == 0)
			return (SPECIAL);
	}
	if (target.find("f") != std::string::npos && target.length() != 1)
		return (FLOAT_TYPE);
	if (target.find(".") != std::string::npos)
		return (DOUBLE_TYPE);
	for (size_t i = 0; i < target.length(); i++)
		if (!isdigit(target[i]))
		{
			if (target[i] == '-' && i == 0)
				continue;
			else if (target.length() == 1)
				return (CHAR_TYPE);
			else
				return (-1);
		}
	return (INT_TYPE);
}

void	print_char(char **av)
{
	char c = static_cast<char>(av[1][0]);

	if (std::isprint(static_cast<int>(c)))
		std::cout << "char: " << static_cast<char>(c) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void	print_int(char **av)
{
	int nb = static_cast<int>(atoi(av[1]));

	if (std::isprint(nb))
		std::cout << "char: " << static_cast<char>(nb) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (strtol(av[1], NULL, 10) > std::numeric_limits<int>::max() || strtol(av[1], NULL, 10) < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(nb) << std::endl;
	std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(nb) << std::endl;
}

void	print_float(char **av)
{
	float nb = static_cast<float>(strtof(av[1], NULL));

	if (std::isprint(static_cast<int>(nb)))
		std::cout << "char: " << static_cast<char>(nb) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (strtol(av[1], NULL, 10) > std::numeric_limits<int>::max() || strtol(av[1], NULL, 10) < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(nb) << std::endl;
	std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(nb) << std::endl;
}

void	print_double(char **av)
{
	double nb = static_cast<double>(strtod(av[1], NULL));

	if (std::isprint(static_cast<int>(nb)))
		std::cout << "char: " << static_cast<char>(nb) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (strtol(av[1], NULL, 10) > std::numeric_limits<int>::max() || strtol(av[1], NULL, 10) < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(nb) << std::endl;
	std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(nb) << std::endl;
}

void	print_special(char **av)
{
	double nb = static_cast<double>(strtod(av[1], NULL));

	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(nb) << std::endl;
}

void	print_default()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

int	main(int ac, char **av)
{
	std::string target;

	if (ac != 2)
		return (2);
	target = av[1];
	switch (getType(target))
	{
		case CHAR_TYPE:
			print_char(av);
			break ;
		case INT_TYPE:
			print_int(av);
			break ;
		case FLOAT_TYPE:
			print_float(av);
			break ;
		case DOUBLE_TYPE:
			print_double(av);
			break ;
		case SPECIAL:
			print_special(av);
			break ;
		default:
			print_default();
			break ;
	}
	return (0);
}
