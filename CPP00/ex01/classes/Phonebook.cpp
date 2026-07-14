/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 10:45:29 by lude-mat          #+#    #+#             */
/*   Updated: 2026/07/14 12:32:46 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include"../utils/utils.hpp"
#include <iostream>

Phonebook::Phonebook(): count(0), index(0)
{}

int	Phonebook::hasContacts(void)
{
	if (this->count == 0)
		return (0);
	return (1);
}

int	Phonebook::renderContacts(void)
{
	int	i = 0;

	while (i < this->count)
	{
		contacts[i].printRow(i);		
		i++;
	}
	return (1);
}

void	Phonebook::addContact(Contact contact)
{
	if (this->count < 8) {
		contacts[this->index] = contact;
		this->index++;
		this->count++;
		std::cout << "Contact " + contact.getIdentity() + " added in phonebook\n";
	}
	else {
		int	index = this->count % 8;
		Contact old_contact = contacts[index];

		contacts[index] = contact;
		this->count++;
		std::cout << "Contact " + old_contact.getIdentity() + " replace by " + contact.getIdentity() + " in your Phonebook\n";
	}
}

int Phonebook::getNbContacts(void) {
	return (this->index);
}

int	Phonebook::getIndex(void) {
	return (this->index);
}

Contact	Phonebook::getSpecificContact(int index)
{
	return (this->contacts[index]);
}
