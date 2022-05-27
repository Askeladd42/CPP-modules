/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:32:15 by plam              #+#    #+#             */
/*   Updated: 2022/05/27 15:42:21 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

/*
** Initialized variables of class Account :
*/

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/*
** Private function(s) (for now only one)
*/

void	Account::_displayTimestamp( void ) {
	time_t	rawtime;
	struct	tm * timeinfo;
	char	buff[24];

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime (buff, 24, "%Y-%m-%d_%H:%M:%S", timeinfo);
	std::cout << "[" << buff << "] ";
}

/*
** Usual functions (constructor, destructor, ...)
*/

Account::Account( void ) { }


Account::Account( int initial_deposit ) : _amount(initial_deposit) {
	_displayTimestamp();

}

Account::~Account( void ) {
	_displayTimestamp();

}

/*
** "Static" functions
*/

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
	std::cout << "Accounts number : " << _nbAccounts << "; Total amount : " << _totalAmount << "; Total deposits done : ";
	std::cout << _totalNbDeposits << "; Total withdraws done : " << _totalNbWithdrawals << std::endl;
}


void	Account::makeDeposit( int deposit )
{
	if (deposit >= 0)
		this->_amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (this->_amount >= withdrawal)
	{
		this->_amount -= withdrawal;
		return true;
	}
	else
	{
		std::cout << "Cannot withdraw this amount : not enough money in the deposit" << std::endl;
		return false;
	}
}
int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	std::cout << "Account number : " << this->_accountIndex << std::endl;
	std::cout << "Account amount : " << this->_amount << std::endl;
	std::cout << "Account deposits number : " << this->_nbDeposits << std::endl;
	std::cout << "Account withdrawals number : " << this->_nbWithdrawals << std::endl;
}
