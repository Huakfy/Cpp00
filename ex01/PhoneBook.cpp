#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	return;
}

PhoneBook::~PhoneBook()
{
	return;
}

void PhoneBook::AddContact(std::string a, std::string b, std::string c, std::string d, std::string e)
{
	Contact	contact;
	contact.set_attr(a, b, c, d, e);
	this->_contacts[PhoneBook::nbContact % 8] = contact;
	PhoneBook::nbContact += 1;
	return;
}

int	PhoneBook::nbContact = 0;
