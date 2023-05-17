#include <iostream>
#include <cctype>
#include <cstring>

int	main(int argc, char **argv) {
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < argc; i++)
			for (int j = 0; j < (int)strlen(argv[i]); j++)
				if (islower(argv[i][j]))
					std::cout << (char)toupper(argv[i][j]);
				else
					std::cout << argv[i][j];
	return 0;
}
