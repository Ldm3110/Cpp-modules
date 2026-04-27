/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   accountDisplay.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 19:11:24 by lude-mat          #+#    #+#             */
/*   Updated: 2026/04/24 14:16:09 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>

#include "../../Account.hpp"

void    Account::_displayTimestamp(void) {
    time_t      timestamp = time(NULL);
    struct tm   *pTime = localtime(&timestamp);
    char        buffer[15];

    strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", pTime);
    std::cout << '[' << buffer << ']';
}

void    Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout
        << " accounts:"
        << Account::_nbAccounts
        << ";total:"
        << Account::_totalAmount
        << ";deposits:"
        << Account::_totalNbDeposits
        << ";withdrawals:"
        << Account::_totalNbWithdrawals
        << std::endl;
}

void    Account::displayStatus(void) const
{
    Account::_displayTimestamp();
    std::cout 
        << " index:" 
        << this->_accountIndex 
        << ";amount:" 
        << this->_amount
        << ";deposits:"
        << this->_totalNbDeposits
        << ";withdrawals:"
        << this->_totalNbWithdrawals
        << std::endl;
}