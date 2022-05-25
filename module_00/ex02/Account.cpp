/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:32:15 by plam              #+#    #+#             */
/*   Updated: 2022/05/25 12:54:10 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

/*
** Static functions
*/

static int	Account::getNbAccounts( void ) {
	return (_nbAccounts);
}

static int	Account::getTotalAmount( void ) {
	return (_totalAmount);
}
static int	Account::getNbDeposits( void ) {
	return (_totalNbDeposits);
}

static int	Account::getNbWithdrawals( void ) {
	return (_totalNbWithdrawals);
}
static void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "Account: " << this->_accountIndex << " Amount : " << this->_amount << std::endl;
}
