#include <iostream>
#include <fstream>
#include <sstream>
#include <main.h>

int	write_to_file(std::string& filename, std::string& content)
{
	std::ofstream outfile(filename.c_str(), std::ios::out | std::ios::trunc);
	if (!outfile)
	{	
		std::cerr << RED << "Error: Could not open file for writing: " << RESET << filename << std::endl;
		return (0);
	}
	outfile << content;
	if (outfile.fail())
	{
        std::cerr << RED << "Error: Failed to write to file: " << RESET << filename << std::endl;
		return (0);
	}
	outfile.close();
	return (1);
}

int	read_from_file(const std::string& filename, std::string& buffer)
{
	std::ifstream stream(filename.c_str());
	std::string line;
	std::stringstream ss;

	if (!stream)
	{
		std::cerr << RED << "Error: Could not open file for reading: " << RESET << filename << std::endl;
        return 0;
	}
	while (getline(stream, line))
	{
		if (stream.bad())
		{
    	    std::cerr << RED << "Error: Failed to read from file: " << RESET << filename << std::endl;
    	    return 0;
    	}
		ss << line << '\n';
	}
	buffer = ss.str();
	stream.close();
	return 1;
}

int fileExists(const std::string& filename)
{
    std::ifstream file(filename.c_str());
    return file.good();
}

std::string replace_all(const std::string& str, const std::string& s1, const std::string& s2)
{
    std::string result;
    size_t pos = 0;
    size_t find_pos;

    if (s1.empty())
        return str;
    while ((find_pos = str.find(s1, pos)) != std::string::npos)
	{
        result.append(str, pos, find_pos - pos);
        result.append(s2);
        pos = find_pos + s1.length();
    }
    result.append(str, pos, std::string::npos);

    return (result);
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << RED << "Invalid number of argumens!" << RESET << std::endl;
		return (1);
	}
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string buff;
	std::string replace;
	if (!fileExists(av[1]))
	{
		std::cerr << RED << "Invalid infile of argumens!" << RESET << std::endl;
		return (1);
	}
	else if (!read_from_file(av[1], buff))
		return (1);
	replace = replace_all(buff, s1, s2);
	std::string outf_name = av[1];
	outf_name += ".replace";
	if (!write_to_file(outf_name, replace))
		return (1);
	return (0);
}
