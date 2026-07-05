/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 23:47:07 by lude-mat          #+#    #+#             */
/*   Updated: 2026/04/23 08:52:54 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
#include <limits>
#include "classes/Contact.hpp"
#include "classes/Phonebook.hpp"
#include "utils/utils.hpp"

static void	create_contact(Phonebook *phonebook)
{
	std::string first_name;
	std::string last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	dark_secret;

	std::cout << "First Name = "; std::getline(std::cin, first_name);
	std::cout << "Last Name = "; std::getline(std::cin, last_name);
	std::cout << "Nickname = "; std::getline(std::cin, nickname);
	std::cout << "Phone Number = "; std::getline(std::cin, phone_number);
	std::cout << "Dark Secret = "; std::getline(std::cin, dark_secret);
	Contact contact(first_name, last_name, nickname, phone_number, dark_secret);
	phonebook->addContact(contact);
}

static void	display_contacts(Phonebook &phonebook)
{
	if (!phonebook.hasContacts())
	{
		std::cout << "No contact to display from your Phonebook\n";
		return ;
	}
	display_header();
	render_contacts(phonebook);
}

static void	search_contact(Phonebook &phonebook)
{
	int	choice;
	int	indexMax = phonebook.getIndex() - 1;
	
	while (1)
	{
		std::cout << "Which contact would you like to see ? (enter -1 to go back) -> ";
		std::cin >> choice;
		if (std::cin.fail() || choice < -1 || choice > indexMax)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<int>::max(), '\n');
			std::cout << "You must enter number between 0 and " << indexMax << std::endl;
		}
		else if (choice == -1)
			break;
		else if (choice >= 0 && choice <= indexMax)
		{
			display_contact_data(phonebook.getSpecificContact(choice));	
			break ;
		}
	}
}

static void	choice_manager(void)
{
	std::string choice;
	Phonebook	phonebook;

	while (1)
	{
		std::cout << "\nPlease choose your option (ADD, SEARCH, EXIT)" << std::endl;
		std::getline(std::cin, choice);
		if (!std::strcmp(choice.c_str(), "ADD"))
			create_contact(&phonebook);	
		else if (!std::strcmp(choice.c_str(), "SEARCH"))
		{
			display_contacts(phonebook);
			search_contact(phonebook);
		}
		else if (!std::strcmp(choice.c_str(), "EXIT"))
		{
			std::cout << "Thank you !! see you later :) !" << std::endl;
			return ;
		}
		else
		{
			std::cout << "Bad Keyword : Only ADD, SEARCH or EXIT" << std::endl;
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
