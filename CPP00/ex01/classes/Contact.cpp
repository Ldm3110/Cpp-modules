/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 08:37:00 by lude-mat          #+#    #+#             */
/*   Updated: 2026/04/23 08:58:19 by lude-mat         ###   ########.fr       */
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
    std::string firstName,
    std::string lastName,
    std::string nickname,
    std::string phoneNumber,
    std::string darkSecret) :
    _firstName(firstName),
    _lastName(lastName),
    _nickname(nickname),
    _phoneNumber(phoneNumber),
    _darkSecret(darkSecret)
{}

// getter
std::string Contact::getIdentity(void)
{
	return (this->_firstName + " " + this->_lastName);
}

std::string	Contact::getFirstName(void)
{
	return (this->_firstName);
}

std::string	Contact::getLastName(void)
{
	return (this->_lastName);
}

std::string	Contact::getNickname(void)
{
	return (this->_nickname);
}

std::string	Contact::getPhoneNumber(void)
{
	return (this->_phoneNumber);
}

std::string	Contact::getDarkSecret(void)
{
	return (this->_darkSecret);
}

// render
void    Contact::printRow(int index)
{
    std::cout << std::setw(10) << std::right << index << "|";
    std::cout << std::setw(10) << std::right << truncate(this->_firstName, 10) << "|";
    std::cout << std::setw(10) << std::right << truncate(this->_lastName, 10) << "|";
    std::cout << std::setw(10) << std::right << truncate(this->_nickname, 10) << std::endl;
}
