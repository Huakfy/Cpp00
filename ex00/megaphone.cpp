#include <iostream>
#include <string>

int	main(int argc, char **argv) {
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < argc; i++)
		{
			std::string str = argv[i];
			for (unsigned long j = 0; j < str.length(); j++)
				std::cout << (char)std::toupper(str[j]);
		}
	std::cout << std::endl;
	return 0;
}
