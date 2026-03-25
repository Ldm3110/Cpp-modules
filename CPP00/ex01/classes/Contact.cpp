/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 08:37:00 by lude-mat          #+#    #+#             */
/*   Updated: 2026/03/25 11:48:49 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include "../utils/utils.hpp"

// Constructor empty for Phonebook list
Contact::Contact()
{}

// Constructor complete to creates contacts
Contact::Contact(
    std::string first_name,
    std::string last_name,
    std::string nickname,
    std::string phone_number,
    std::string dark_secret)
{
    this->_first_name = first_name;
    this->_last_name = last_name;
    this->_nickname = nickname;
    this->_phone_number = phone_number;
    this->_dark_secret = dark_secret;
}

// getter
void	Contact::getIdentity(void)
{
	std::cout << "Contact = " + this->_first_name + " " + this->_last_name + "\n";
}

// render
void    Contact::printRow(int index)
{
    std::cout << std::setw(10) << std::right << index << "|";
    std::cout << std::setw(10) << std::right << truncate(this->_first_name, 10) << "|";
    std::cout << std::setw(10) << std::right << truncate(this->_last_name, 10) << "|";
    std::cout << std::setw(10) << std::right << truncate(this->_nickname, 10) << std::endl;
}
