#include "iostream"

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*strPtr = &str;
	std::string	&strRef = str;

	std::cout << "Address" << std::endl;

	std::cout <<  "string address: " << &str << std::endl;
	std::cout <<  "ptr address: " << strPtr << std::endl;
	std::cout <<  "ref address: " << &strRef << std::endl;

	std::cout << "Value" << std::endl;

	std::cout <<  "string value: " << str << std::endl;
	std::cout <<  "ptr value: " << *strPtr << std::endl;
	std::cout <<  "ref value: " << strRef << std::endl;

	return (0);
}