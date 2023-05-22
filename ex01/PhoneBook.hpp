#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.cpp"
# include <iostream>
# include <iomanip>

class PhoneBook
{
private:
	Contact	_contacts[8];
public:
	PhoneBook();
	~PhoneBook();
	void AddContact(std::string a, std::string b, std::string c, std::string d, std::string e);
	static int	nbContact;
};
#endif
