#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ) {
	return _nbAccounts;
}

int	Account::getTotalAmount( void ) {
	return _totalAmount;
}

int	Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}


void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	return;
}

Account::Account( int initial_deposit ) {
	(void)initial_deposit;//
	return;
}

Account::~Account( void ) {
	return;
}

void	Account::makeDeposit( int deposit ) {
	(void)deposit;
	return;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	(void)withdrawal;//
	return 1;//
}

int		Account::checkAmount( void ) const {
	return 1;//
}

void	Account::displayStatus( void ) const {
	return;
}

#include <iostream>

void	Account::_displayTimestamp( void ) {
	time_t	now = time(0);
	tm		*ltm = localtime(&now);

	std::cout << "[" << 1900 + ltm->tm_year;
	if (1 + ltm->tm_mon < 10)
		std::cout << "0";
	std::cout << 1 + ltm->tm_mon;
	if (ltm->tm_mday < 10)
		std::cout << "0";
	std::cout << ltm->tm_mday;
	std::cout << "_";
	if (ltm->tm_hour < 10)
		std::cout << "0";
	std::cout << ltm->tm_hour;
	if (ltm->tm_min < 10)
		std::cout << "0";
	std::cout << ltm->tm_min;
	if (ltm->tm_sec < 10)
		std::cout << "0";
	std::cout << ltm->tm_sec;
	std::cout << "]" << std::endl;
	return;
}

Account::Account( void ) {
	this->_nbAccounts++;
	return;
}
