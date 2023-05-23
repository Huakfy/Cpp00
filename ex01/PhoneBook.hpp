#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.cpp"

class PhoneBook
{
private:
	Contact	_contacts[8];
public:
	PhoneBook();
	~PhoneBook();
	void		AddContact(std::string a, std::string b, std::string c, std::string d, std::string e);
	std::string	get_fName(int i);
	static int	nbContact;
};
#endif
