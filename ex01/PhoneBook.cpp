#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	return;
}

PhoneBook::~PhoneBook() {
	return;
}

void	PhoneBook::AddContact(std::string a, std::string b, std::string c, std::string d, std::string e) {
	this->_contacts[PhoneBook::_nbContact % 8].SetAttr(a, b, c, d, e);
	PhoneBook::_nbContact += 1;
	return;
}

std::string	PhoneBook::ShortenWord(std::string str)
{
	if (str.length() >= 10)
		return (str.substr(0, 9) + ".");
	return (std::string(10 - str.length(), ' ') + str);
}

void	PhoneBook::Search() {
	int				width = 100;
	struct winsize	size;

	if (ioctl(STDOUT_FILENO, TIOCGWINSZ, &size))
		width = size.ws_row;
	std::cout << std::right << std::setw(width) << " ___________________________________________ " << std::endl;
	std::cout << std::right << std::setw(width) << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	for(int i=0; i < 8 && i < _nbContact; i++)
	{
		std::cout << std::right << std::setw(width) << "|----------+----------+----------+----------|" << std::endl;
		std::string	line;
		line += "|" + std::string(9, ' ') + "1" + "|"; //index
		line[10] += i;
		line += ShortenWord(this->_contacts[i].Get_fName()) + "|"; //first Name
		line += ShortenWord(this->_contacts[i].Get_lName()) + "|"; //last name
		line += ShortenWord(this->_contacts[i].Get_nName()) + "|"; //nick name
		std::cout << std::right << std::setw(width) << line << std::endl;
	}
	std::cout << std::right << std::setw(width) << " ------------------------------------------- " << std::endl;
}

int	PhoneBook::_nbContact = 0;
