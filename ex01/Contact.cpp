#include "Contact.hpp"

Contact::Contact() {
	return;
}

Contact::~Contact() {
	return;
}

void	Contact::SetAttr(std::string a, std::string b, std::string c, std::string d, std::string e) {
	this->_fName = a;
	this->_lName = b;
	this->_nName = c;
	this->_pNumb = d;
	this->_dSecr = e;
	return;
}

std::string	Contact::Get_fName() const {
	return this->_fName;
}

std::string	Contact::Get_lName() const {
	return this->_lName;
}

std::string	Contact::Get_nName() const {
	return this->_nName;
}

std::string	Contact::Get_pNumb() const {
	return this->_pNumb;
}

std::string	Contact::Get_dSecr() const {
	return this->_dSecr;
}
