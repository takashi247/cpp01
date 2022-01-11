#include "Karen.hpp"
#include <iostream>
#include <string>

int
    main(int ac, char **av)
{
    if (ac != 2)
        return (1);
    std::string level = av[1];
    const int	index = Karen::get_index(level);
    Karen       karen;
    switch (index)
    {
        case Karen::DEBUG_INDEX:
            std::cout << "[ DEBUG ]" << std::endl;
            karen.complain("DEBUG");
            std::cout << std::endl;
        case Karen::INFO_INDEX:
            std::cout << "[ INFO ]" << std::endl;
            karen.complain("INFO");
            std::cout << std::endl;
        case Karen::WARNING_INDEX:
            std::cout << "[ WARNING ]" << std::endl;
            karen.complain("WARNING");
            std::cout << std::endl;
        case Karen::ERROR_INDEX:
            std::cout << "[ ERROR ]" << std::endl;
            karen.complain("ERROR");
            std::cout << std::endl;
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n" << std::endl;
            break ;
    }
    return (0);
}
