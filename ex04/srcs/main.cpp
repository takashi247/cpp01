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
    filename += ".replace";
    std::ofstream   ofs(filename);
    if (ofs.fail())
        std::cout << "Failed to open the output file" << std::endl;
    std::string line;
	std::string	target = av[2];
	std::string::size_type	len_of_target = target.length();
	std::string	replacement = av[3];
    while (std::getline(ifs, line))
	{
        line += "\n";
		std::string::size_type	found = line.find(target);
		while (found != std::string::npos)
		{
			line.erase(found, len_of_target);
			line.insert(found, replacement);
			found = line.find(target);
		}
        ofs << line;
	}
    return (0);
}
