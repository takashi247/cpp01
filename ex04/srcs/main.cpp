#include <fstream>
#include <iostream>

void
    ft_replace(std::ifstream &ifs, std::ofstream &ofs, char **av)
{
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
    ofs << std::flush;
}

std::string
    ft_toupper(std::string str)
{
    for (std::string::size_type i = 0; i < str.length(); i++)
        str[i] = static_cast<char>(std::toupper(static_cast<unsigned char>(str[i])));
    return (str);
}

void
    check_input_strings(char **av)
{
    std::string target = av[2];
    std::string replacement = av[3];
    std::string::size_type  found_self = replacement.find(target);
    if (found_self != std::string::npos)
    {
        std::cerr << "ERROR: The second string should not include the first string" << std::endl;
        std::exit(1);
    }
}

int
    main(int ac, char **av)
{
    if (ac != 4)
        std::exit(1);
    std::ifstream   ifs(av[1], std::ios_base::binary);
    if (!ifs.good())
    {
        std::cerr << "ERROR: Failed to open the input file" << std::endl;
        std::exit(1);
    }
    std::string     filename = av[1];
    std::ifstream   dir_check(filename + "/");
    if (dir_check.good())
    {
        std::cerr << "ERROR: The input file is a directory" << std::endl;
        std::exit(1);
    }
    check_input_strings(av);
    filename = ft_toupper(filename);
    filename += ".replace";
    std::ofstream   ofs(filename, std::ios_base::binary);
    if (!ofs.good())
    {
        std::cerr << "ERROR: Failed to open the output file" << std::endl;
        std::exit(1);
    }
    ft_replace(ifs, ofs, av);
}
