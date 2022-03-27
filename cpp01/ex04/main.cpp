#include <fstream>
#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Invalid number of agument" << std::endl;
		return (1);
	}
	std::string	s2 = av[3];
	std::string	s1 = av[2];
	std::string	filename = av[1];
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string 	txt;
	int				index;

	infile.open(filename.c_str());
	if (infile.fail())
	{
		std::cout << "Error while opening infile" << std::endl;
		return (0);
	}
	outfile.open(filename.append(".replace").c_str());
	if (outfile.fail())
	{
		std::cout << "Error while opening outfile" << std::endl;
		return (0);
	}
	while (std::getline(infile, txt))
	{
		index = txt.find(s1);
		while (index != -1)
		{
			txt.erase(index, s1.length());
			txt.insert(index, s2);
			index = txt.find(s1);
		}
		outfile << txt << std::endl;	
	}
	infile.close();
	outfile.close();
	return (0);
}