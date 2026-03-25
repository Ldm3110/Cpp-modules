/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 11:34:32 by lude-mat          #+#    #+#             */
/*   Updated: 2026/03/25 11:50:07 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../classes/Contact.hpp"
#include <iostream>
#include <iomanip>

std::string  truncate(std::string str, int width)
{
    if ((int)str.length() > width)
        return str.substr(0, width - 1) + ".";
    return str;
}

void	display_header(void)
{
    std::cout << std::setw(10) << std::right << "Index" << "|";
    std::cout << std::setw(10) << std::right << "First Name" << "|";
    std::cout << std::setw(10) << std::right << "Last Name" << "|";
    std::cout << std::setw(10) << std::right << "Nickname" << std::endl;
    std::cout << std::string(43, '-') << std::endl;
}

void	display_contact_data(Contact contact)
{
	std::cout << "First Name = " + contact.getFirstName() << std::endl;
	std::cout << "Last Name = " + contact.getLastName() << std::endl;
	std::cout << "Nickname = " + contact.getNickname() << std::endl;
	std::cout << "Phone Number = " + contact.getPhoneNumber() << std::endl;
	std::cout << "Dark Secret = " + contact.getDarkSecret() << std::endl;
}
