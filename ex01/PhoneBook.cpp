#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	return;
}

PhoneBook::~PhoneBook() {
	return;
}

void PhoneBook::AddContact(std::string a, std::string b, std::string c, std::string d, std::string e)
{
	this->_contacts[PhoneBook::nbContact % 8].set_attr(a, b, c, d, e);
	PhoneBook::nbContact += 1;
	return;
}

std::string	PhoneBook::get_fName(int i)
{
	return (this->_contacts[i].get_fName());
}

int	PhoneBook::nbContact = 0;
