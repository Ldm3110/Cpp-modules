/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 10:45:29 by lude-mat          #+#    #+#             */
/*   Updated: 2026/04/22 23:40:10 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include"../utils/utils.hpp"
#include <iostream>

Phonebook::Phonebook(): count(0), index(0)
{}

int	Phonebook::renderContacts(void)
{
	int	i = 0;

	if (this->count == 0)
	{
		std::cout << "No contacts available in your Phonebook\n";
		return (0);
	}
	display_header();
	while (i < this->count)
	{
		contacts[i].printRow(i);		
		i++;
	}
	return (1);
}

void	Phonebook::addContact(Contact contact)
{
	contacts[this->index] = contact;
	this->index++;
	this->count++;
	std::cout << "Contact added in phonebook\n";
}

int	Phonebook::getIndex(void) {
	return (this->index);
}

Contact	Phonebook::getSpecificContact(int index)
{
	return (this->contacts[index]);
}
