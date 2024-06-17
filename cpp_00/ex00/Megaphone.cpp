#include <iostream>
#include <string>
#include <cctype>
#include <cstddef>

int	main(int ac, char **av)
{
	int i = 1;
	std::string input;

	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEADBACK NOISE *" << std::endl;
		return 1;
	}
	while (av[i])
	{
		input = av[i];
		for (size_t j = 0; j < input.size(); ++j)
		{
        	input[j] = std::toupper(input[j]);
			std::cout << input[j];
    	}
		i++;
	}
	std::cout << std::endl;
	return 0;
}