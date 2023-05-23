#include "PhoneBook.cpp"

# include <iostream>
# include <unistd.h>
# include <sys/ioctl.h>

bool	AddContact(PhoneBook *PB)
{
	std::string	fName;
	std::string	lName;
	std::string	nName;
	std::string	pNumb;
	std::string	dSecr;

	std::cout << "First Name: ";
	if (!std::getline(std:: cin, fName))
		return (0);
	std::cout << "Last Name: ";
	if (!std::getline(std:: cin, lName))
		return (0);
	std::cout << "Nick Name: ";
	if (!std::getline(std:: cin, nName))
		return (0);
	std::cout << "Phone Number: ";
	if (!std::getline(std:: cin, pNumb))
		return (0);
	std::cout << "Darkest Secret: ";
	if (!std::getline(std:: cin, dSecr))
		return (0);
	(*PB).AddContact(fName, lName, nName, pNumb, dSecr);
	return (1);
}

int	main(void)
{
	std::string	cmd;
	int	width = 100;

	struct winsize size;
	if (ioctl(STDOUT_FILENO, TIOCGWINSZ, &size))
		width = size.ws_row;
	//std::right << std::setw(width) <<
	(void)width;

	PhoneBook	PB;

	while (std::cout << "Waiting for a command (ADD || SEARCH || EXIT)" << std::endl && std::getline(std::cin, cmd))
	{
		if (cmd == "ADD" && !AddContact(&PB))
			break;
		else if (cmd == "SEARCH")
			std::cout << "[" << PB.get_fName(0) << "]" << std::endl;
		else if (cmd == "EXIT")
			break;
	}
	return (0);
}
