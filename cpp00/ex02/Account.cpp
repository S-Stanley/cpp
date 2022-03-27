#include "Account.hpp"

#include <iostream>
#include <ctime>

std::string	convert_to_string(int nb)
{
	std::string	str = "";

	while (nb > 1)
	{
		str += (nb % 10) + '0';
		nb = nb / 10;
	}
	return (str);
}

std::string	get_timestamp(void)
{
	std::string	str = "";

	std::time_t	t = std::time(0);
	std::tm	*now = std::localtime(&t);

	str += "[";
	str += convert_to_string(now->tm_year + 1900);
	if (now->tm_mon > 10)
		str += convert_to_string(now->tm_mon + 1);
	else
		str += convert_to_string(now->tm_mon + 11);
	str += convert_to_string(now->tm_mday);
	str += "_";
	str += convert_to_string(now->tm_hour);
	str += convert_to_string(now->tm_min);
	str += convert_to_string(now->tm_sec);
	str += "] ";
	return (str);
}

Account::Account(int initial_deposit)
{
	_totalAmount += initial_deposit;
	this->_accountIndex = getNbAccounts();
	this->_amount = initial_deposit;
	this->_nbWithdrawals = 0;
	std::cout << get_timestamp() << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	_nbAccounts++;
}

Account::Account(void)
{
	this->_accountIndex = getNbAccounts();
	_nbAccounts++;
	this->_amount = 0;
	this->_nbWithdrawals = 0;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	std::cout << get_timestamp() << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
	return ;
}

void	Account::makeDeposit(int deposit)
{
	_totalAmount += deposit;
	_totalNbDeposits++;
	this->_amount += deposit;
	this->_nbDeposits++;
	std::cout << get_timestamp() << "index:" << this->_accountIndex << ";p_amount:" << this->_amount - deposit << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (_amount - withdrawal < 0)
	{
		std::cout << get_timestamp() << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:" << "refused" << std::endl;
		return (false);
	}
	_totalAmount = _totalAmount - withdrawal;
	_totalNbWithdrawals++;
	this->_amount = this->_amount - withdrawal;
	this->_nbWithdrawals++;
	std::cout << get_timestamp() << "index:" << this->_accountIndex << ";p_amount:" << this->_amount + withdrawal << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this-> _nbWithdrawals << std::endl;
	return (true);
}

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus() const
{
	std::cout << get_timestamp() << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

Account::~Account(void)
{
	std::cout << get_timestamp() << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	return ;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;