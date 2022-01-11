#include "Karen.hpp"
#include <iostream>

const std::string   Karen::DEBUG_MSG = "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!";
const std::string   Karen::INFO_MSG = "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!";
const std::string   Karen::WARNING_MSG = "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.";
const std::string   Karen::ERROR_MSG = "This is unacceptable, I want to speak to the manager now.";
const int           Karen::DEBUG_INDEX = 0;
const int           Karen::INFO_INDEX = 1;
const int           Karen::WARNING_INDEX = 2;
const int           Karen::ERROR_INDEX = 3;

Karen::Karen(){};

Karen::~Karen(){};

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

void Karen::(*const functionArray[])(void) = {
	Karen::debug,
	Karen::info,
	Karen::warning,
	Karen::error
};

void
    Karen::complain(std::string level)
{
	int	index = (level == "DEBUG") * DEBUG_INDEX + (level == "INFO") * INFO_INDEX \
        + (level == "WARNING") * WARNING_INDEX + (level == "ERROR") * ERROR_INDEX;
    this->functionArray[index]();
}
