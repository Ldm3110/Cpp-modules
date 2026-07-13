/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 23:47:07 by lude-mat          #+#    #+#             */
/*   Updated: 2026/07/13 22:06:13 by lude-mat         ###   ########.fr       */
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

static std::string ask_input(std::string typeField)
{
	std::string field;

	while (field.empty())
	{
		std::cout << typeField << " = "; 
		std::getline(std::cin, field);
		if (std::cin.eof())
			throw std::runtime_error("\nCtrl-D activation in contact creation\n");
	}
	return (field);
}

static void	create_contact(Phonebook *phonebook)
{
	std::string first_name;
	std::string last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	dark_secret;

	first_name = ask_input("First Name");
	last_name = ask_input("Last Name");
	nickname = ask_input("Nickname");
	phone_number = ask_input("Phone Number");
	dark_secret = ask_input("Dark Secret");
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
		if (std::cin.eof())
			throw std::runtime_error("\nCtrl-D activation in search menu\n");
		else if (std::cin.fail() || choice < -1 || choice > indexMax)
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
		else if (std::cin.eof())
			throw std::runtime_error("Ctrl-D activation in main menu !") ;
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
	try {
		choice_manager();
	} catch (std::runtime_error &e) {
		std::cout << e.what() << std::endl;
		return (1);
	}
	return (0);
}
