#include "Karen.hpp"
#include <iostream>

const std::string   Karen::DEBUG_MSG = "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!";
const std::string   Karen::INFO_MSG = "I cannot believe adding extra bacon cost more money.\nYou don’t put enough!\nIf you did I would not have to ask for it!";
const std::string   Karen::WARNING_MSG = "I think I deserve to have some extra bacon for free.\nI’ve been coming here for years and you just started working here last month.";
const std::string   Karen::ERROR_MSG = "This is unacceptable, I want to speak to the manager now.";

Karen::Karen()
{
	this->funcs[0] = &Karen::debug;
	this->funcs[1] = &Karen::info;
	this->funcs[2] = &Karen::warning;
	this->funcs[3] = &Karen::error;
};

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

int
    Karen::get_index(std::string &level)
{
    return ((level == "DEBUG") * DEBUG_INDEX + (level == "INFO") * INFO_INDEX \
        + (level == "WARNING") * WARNING_INDEX + (level == "ERROR") * ERROR_INDEX \
        + (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR") \
        * INVALID_INDEX);
}

void
    Karen::complain(std::string level)
{
	int	index = Karen::get_index(level);
    if (index != INVALID_INDEX)
        (this->*funcs[index])();
}
