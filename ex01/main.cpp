#include "PhoneBook.cpp"

bool	invalid_char(std::string str) {
	for (long unsigned int i = 0; i < str.size(); i++)
		if (str[i] == '\f' || str[i] == '\n' || str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
			return (1);
	return (0);
}

bool	get_next_line(std::string *line, std::string str) {
	while ((*line).empty() || invalid_char(*line))
	{
		std::cout << str;
		if (!std::getline(std::cin, (*line)))
			return (0);
		if ((*line).empty() || invalid_char(*line))
			std::cout << "Must not be empty / contain invalid chars ('\\f', '\\n', '\\r', '\\t', '\\v')" << std::endl;
	}
	return (1);
}

bool	AddContact(PhoneBook *PB) {
	std::string	fName;
	std::string	lName;
	std::string	nName;
	std::string	pNumb;
	std::string	dSecr;

	if (!get_next_line(&fName, "First Name: "))
		return (0);
	if (!get_next_line(&lName, "Last Name: "))
		return (0);
	if (!get_next_line(&nName, "Nickname: "))
		return (0);
	if (!get_next_line(&pNumb, "Phone Number: "))
		return (0);
	if (!get_next_line(&dSecr, "Darkest Secret: "))
		return (0);
	(*PB).AddContact(fName, lName, nName, pNumb, dSecr);
	return (1);
}

int	main(void) {
	std::string	cmd;
	PhoneBook	PB;

	while (std::cout << "Waiting for a command (ADD || SEARCH || EXIT)" << std::endl && std::getline(std::cin, cmd))
	{
		if (cmd == "ADD" && !AddContact(&PB))
			break;
		else if (cmd == "SEARCH")
		{
			PB.Search();
			int	x = -1;
			while (x == -1)
			{
				std::cout << "Enter index: ";
				std::string	nb;
				if (!std::getline(std::cin, nb))
					return (0);
				if (nb.length() > 1 || nb[0] < '1' || nb[0] > '8')
				{
					std::cout << "Must be a digit between 1 and 8" << std::endl;
					continue ;
				}
				std::stringstream(nb) >> x;
				PB.Print(x - 1);
			}
		}
		else if (cmd == "EXIT")
			break;
	}
	return (0);
}
