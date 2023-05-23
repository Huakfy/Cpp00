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

void		PhoneBook::Print(int i) {
	if (i > this->_nbContact)
	{
		std::cout << "Contact doesn't exist" << std::endl;
		return;
	}
	std::cout << "First Name: " << this->_contacts[i].Get_fName() << std::endl;
	std::cout << "Last Name: " << this->_contacts[i].Get_lName() << std::endl;
	std::cout << "Nickname: " << this->_contacts[i].Get_nName() << std::endl;
	std::cout << "Phone Number: " << this->_contacts[i].Get_pNumb() << std::endl;
	std::cout << "Darkest Secret: " << this->_contacts[i].Get_dSecr() << std::endl;
}

int	PhoneBook::_nbContact = 0;
