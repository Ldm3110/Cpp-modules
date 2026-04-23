/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 23:50:16 by lude-mat          #+#    #+#             */
/*   Updated: 2026/04/23 09:21:58 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>

#include "Account.hpp"

//Define values static vars
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Constructor
Account::Account (int initial_deposit): 
    _amount(initial_deposit),
    _accountIndex(Account::_nbAccounts),
    _nbDeposits(0),
    _nbWithdrawals(0) 
{
    Account::_displayTimestamp();
    std::cout 
        << " index:" 
        << this->_accountIndex 
        << ":amount:" 
        << this->_amount 
        << ":created" 
        << std::endl;
    Account::_nbAccounts++;
}
// Destructor
Account::~Account() {
    Account::_displayTimestamp();
    std::cout 
        << " index:" 
        << this->_accountIndex 
        << ":amount:" 
        << this->_amount 
        << ":closed" 
        << std::endl;
}

void  Account::_displayTimestamp(void) {
    time_t      timestamp = time(NULL);
    struct tm   *pTime = localtime(&timestamp);
    char        buffer[15];

    strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", pTime);
    std::cout << '[' << buffer << ']';
}