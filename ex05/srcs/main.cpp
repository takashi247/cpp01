#include "Karen.hpp"
#include <iostream>

int
    main()
{
    Karen   karen;
    std::cout << "level = DEBUG: " << std::endl;
    karen.complain("DEBUG");
    std::cout << "level = INFO: " << std::endl;
    karen.complain("INFO");
    std::cout << "level = WARNING: " << std::endl;
    karen.complain("WARNING");
    std::cout << "level = ERROR: " << std::endl;
    karen.complain("ERROR");
    std::cout << "level = HOGE: " << std::endl;
    karen.complain("HOGE");
}
