#include "Karen.hpp"
#include <iostream>

Karen::Karen();

Karen::~Karen();

void
    Karen::debug()
{
    std::cout << DEBUG_MSG << std::endl;
}

void
    Karen::info()
{
    std::cout << INFO_MSG << std::endl;
}

void
    Karen::warning()
{
    std::cout << WARNING_MSG << std::endl;
}

void
    Karen::error()
{
	std::cout << ERROR_MSG << std::endl;
}

void
    Karen::complain(std::string level)
{
	int	index = (level == "DEBUG") * DEBUG_INDEX + (level == "INFO") * INFO_INDEX \
        + (level == "WARNING") * WARNING_INDEX + (level == "ERROR") * ERROR_INDEX;
    (this->*functionArray[index])();
}
