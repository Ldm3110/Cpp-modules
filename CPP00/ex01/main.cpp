/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 23:47:07 by lude-mat          #+#    #+#             */
/*   Updated: 2026/03/25 12:02:12 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "classes/Contact.hpp"
#include "classes/Phonebook.hpp"

static void	create_contact(Phonebook *phonebook)
{
	std::string first_name;
	std::string last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	dark_secret;

	std::cin.ignore(); // remove \n before use getline
	std::cout << "First Name = "; std::getline(std::cin, first_name);
	std::cout << "Last Name = "; std::getline(std::cin, last_name);
	std::cout << "Nickname = "; std::getline(std::cin, nickname);
	std::cout << "Phone Number = "; std::getline(std::cin, phone_number);
	std::cout << "Dark Secret = "; std::getline(std::cin, dark_secret);
	Contact contact(first_name, last_name, nickname, phone_number, dark_secret);
	contact.getIdentity();
	phonebook->addContact(contact);
}

static void	choice_manager(void)
{
	std::string choice;
	Phonebook	phonebook;

	while (1)
	{
		std::cout << "\nPlease choose your option (ADD, SEARCH, EXIT)\n";
		std::cin >> choice;
		if (choice == "ADD")
			create_contact(&phonebook);	
		else if (choice == "SEARCH")
			phonebook.renderContacts();
		else if (choice == "EXIT")
		{
			std::cout << "Thank you !! see you later :) !\n";
			return ;
		}
		else {
			std::cout << "Bad Keyword : Only ADD, SEARCH or EXIT\n";
		}
	}	
}

int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	choice_manager();
	return (0);
}
