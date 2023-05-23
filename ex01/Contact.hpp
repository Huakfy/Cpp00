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
	void SetAttr(std::string a, std::string b, std::string c, std::string d, std::string e);
	std::string	Get_fName() const;
	std::string	Get_lName() const;
	std::string	Get_nName() const;
	std::string	Get_pNumb() const;
	std::string	Get_dSecr() const;
};
#endif
