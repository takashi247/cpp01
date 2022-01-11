#include <fstream>
#include <iostream>

int
    main(int ac, char **av)
{
    if (ac != 4)
        return (1);
    std::ifstream   ifs(av[1]);
    if (ifs.fail())
        std::cout << "Failed to open the input file" << std::endl;
    std::string     filename = av[1];
    filename += ".replace"
    std::ofstream   ofs(filename);
    if (ofs.fail())
        std::cout << "Failed to open the output file" << std::endl;
    std::string line;
    while (std::getline(ifs, line))
        ofs << line;
    return (0);
}
