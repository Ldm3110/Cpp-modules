/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 23:50:16 by lude-mat          #+#    #+#             */
/*   Updated: 2026/07/13 22:54:32 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "../../Account.hpp"

//Define values static vars
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Constructor
Account::Account (int initial_deposit): 
    _accountIndex(Account::_nbAccounts),
    _amount(initial_deposit),
    _nbDeposits(0),
    _nbWithdrawals(0) 
{
    Account::_displayTimestamp();
    std::cout 
        << " index:" 
        << this->_accountIndex 
        << ";amount:" 
        << this->_amount 
        << ";created" 
        << std::endl;
    Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;
}
// Destructor
Account::~Account() {
    Account::_displayTimestamp();
    std::cout 
        << " index:" 
        << this->_accountIndex 
        << ";amount:" 
        << this->_amount 
        << ";closed" 
        << std::endl;
}

void    Account::makeDeposit(int deposit)
{
    int _pAmount = this->_amount;
    this->_amount += deposit;
    this->_nbDeposits++;
    Account::_totalNbDeposits++;
    Account::_displayTimestamp();
    Account::_totalAmount += deposit;
    std::cout
        << " index:"
        << this->_accountIndex
        << ";p_amount:"
        << _pAmount
        << ";deposit:"
        << deposit
        << ";amount:"
        << this->_amount
        << ";nb_deposits:"
        << this->_nbDeposits
        << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    int _pAmount = this->_amount;
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";p_amount:" << _pAmount;
    if (withdrawal > _pAmount)
    {
        std::cout << ";withdrawal:refused" << std::endl;
        return false;
    }
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    Account::_totalAmount -= withdrawal;
    Account::_totalNbWithdrawals++;
    std::cout 
        << ";withdrawal:" 
        << withdrawal 
        << ";amount:" 
        << this->_amount
        << ";nb_withdrawals:"
        << this->_nbWithdrawals
        << std::endl; 
    return true;
}

int		Account::checkAmount( void ) const {
    return (this->_totalAmount);
}