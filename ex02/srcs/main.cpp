#include <iostream>
#include <string>

int
	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string &stringREF = str;
	std::cout << "Address of str		:" << &str << std::endl;
	std::cout << "Address via pointer	:" << stringPTR << std::endl;
	std::cout << "Address via reference	:" << &stringREF << std::endl;
	std::cout << "Original string		:" << str << std::endl;
	std::cout << "String via pointer	:" << *stringPTR << std::endl;
	std::cout << "String via reference	:" << stringREF << std::endl;
}
