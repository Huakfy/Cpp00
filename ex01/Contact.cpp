#include "Contact.hpp"

Contact::Contact(){
	return;
}

Contact::~Contact() {
	return;
}

void	Contact::set_attr(std::string a, std::string b, std::string c, std::string d, std::string e) {
	this->_fName = a;
	this->_lName = b;
	this->_nName = c;
	this->_pNumb = d;
	this->_dSecr = e;
	return;
}

std::string	Contact::get_fName() const {
	return this->_fName;
}

std::string	Contact::get_lName() const {
	return this->_lName;
}

std::string	Contact::get_nName() const {
	return this->_nName;
}

std::string	Contact::get_pNumb() const {
	return this->_pNumb;
}

std::string	Contact::get_dSecr() const {
	return this->_dSecr;
}
