#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void) 
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_accountIndex = this->_nbAccounts++;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += _amount;
	Account::_displayTimestamp();
	std::cout << "index" << ':' << this->_accountIndex << ';';
	std::cout << "amount" << ':' << this->_amount << ';' << "created\n";
}

void	Account::_displayTimestamp(void)
{
	time_t now = time(0);
  	tm *ltm = localtime(&now);
  	std::cout << '[' << 1900 + ltm->tm_year;
  	std::cout << std::setfill('0') << std::setw(2) << 1 + ltm->tm_mon;
  	std::cout << std::setfill('0') << std::setw(2) << ltm->tm_mday << '_';
  	std::cout << std::setfill('0') << std::setw(2) << 1 + ltm->tm_hour;
  	std::cout << std::setfill('0') << std::setw(2) << 1 + ltm->tm_min;
  	std::cout << std::setfill('0') << std::setw(2) << 1 + ltm->tm_sec << "]" << ' ';
}

Account::~Account( void )
{
	this->_nbAccounts--;
	Account::_displayTimestamp();
	std::cout << "index" << ':' << this->_accountIndex << ';';
	std::cout << "amount" << ':' << this->_amount << ';' << "closed\n";
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts" << ':' << Account::_nbAccounts << ';';
	std::cout << "total" << ':' << Account::_totalAmount << ';';
	std::cout << "deposits" << ':' << Account::_totalNbDeposits << ';';
	std::cout << "withdrawals" << ':' << Account::_totalNbWithdrawals << "\n";
}

Account::Account(void)
{
	this->_amount = 0;
	this->_accountIndex = this->_nbAccounts++;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index" << ':' << this->_accountIndex << ';';
	std::cout << "amount" << ':' << this->_amount << ';' << "created";
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index" << ':' << this->_accountIndex << ';';
	std::cout << "p_amount" << ':' << this->_amount << ';';
	std::cout << "deposit" << ':' << deposit << ';';
	std::cout << "amount" << ':' << this->_amount + deposit << ';';
	this->_nbDeposits++;
	this->_amount += deposit;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	std::cout << "nb_deposits" << ':' << this->_nbDeposits << "\n";
}

int		Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index" << ':' << this->_accountIndex << ';';
	std::cout << "amount" << ':' << this->_amount << ';';
	std::cout << "deposits" << ':' << this->_nbDeposits << ';';
	std::cout << "withdrawals" << ':' << this->_nbWithdrawals << '\n';
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index" << ':' << this->_accountIndex << ';';
	std::cout << "p_amount" << ':' << this->_amount << ';';
	std::cout << "withdrawal" << ':';
	if (Account::checkAmount() - withdrawal >= 0)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << withdrawal << ';';
		std::cout << "amount" << ':' << this->_amount << ';';
		std::cout << "nb_withdrawals" << ':' << this->_nbWithdrawals << '\n';
		Account::_totalAmount -= withdrawal;
		return (true);
	}
	std::cout << "refused\n";
	return (false);
}
