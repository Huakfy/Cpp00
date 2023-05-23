#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
private:
	std::string	_fName;
	std::string	_lName;
	std::string	_nName;
	std::string	_pNumb;
	std::string	_dSecr;
public:
	Contact();
	~Contact();
	void set_attr(std::string a, std::string b, std::string c, std::string d, std::string e);
	std::string	get_fName() const;
	std::string	get_lName() const;
	std::string	get_nName() const;
	std::string	get_pNumb() const;
	std::string	get_dSecr() const;
};
#endif
