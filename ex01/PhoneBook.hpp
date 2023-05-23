#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.cpp"
# include <iostream>
# include <iomanip>
# include <sys/ioctl.h>
# include <unistd.h>

class PhoneBook
{
private:
	Contact		_contacts[8];
	static int	_nbContact;
	std::string	ShortenWord(std::string str);
public:
	PhoneBook();
	~PhoneBook();
	void		AddContact(std::string a, std::string b, std::string c, std::string d, std::string e);
	void		Search();
};
#endif
