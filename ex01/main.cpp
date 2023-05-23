#include "PhoneBook.cpp"

bool	get_next_line(std::string *line) {
	while ((*line).empty())
		if (!std::getline(std::cin, (*line)))
			return (0);
	return (1);
}

bool	AddContact(PhoneBook *PB) {
	std::string	fName;
	std::string	lName;
	std::string	nName;
	std::string	pNumb;
	std::string	dSecr;

	std::cout << "First Name: ";
	if (!get_next_line(&fName))
		return (0);
	std::cout << "Last Name: ";
	if (!get_next_line(&lName))
		return (0);
	std::cout << "Nick Name: ";
	if (!get_next_line(&nName))
		return (0);
	std::cout << "Phone Number: ";
	if (!get_next_line(&pNumb))
		return (0);
	std::cout << "Darkest Secret: ";
	if (!get_next_line(&dSecr))
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
			PB.Search();
		else if (cmd == "EXIT")
			break;
	}
	return (0);
}
