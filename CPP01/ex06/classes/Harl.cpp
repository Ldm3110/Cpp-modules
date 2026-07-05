/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 20:19:16 by lude-mat          #+#    #+#             */
/*   Updated: 2026/04/27 21:57:03 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

// private
void    Harl::_debug(void)
{
    std::cout << "[DEBUG]\n";
    std::cout << "this text is a debug text !!\n\n";
}

void    Harl::_info(void)
{
    std::cout << "[INFO]\n";
    std::cout << "INFO: This test is an info text\n\n";
}

void    Harl::_warning(void)
{
    std::cout << "[WARNING]\n";
    std::cout << "WARNING: This is a warning message\n\n";
}

void    Harl::_error(void)
{
    std::cout << "[ERROR]\n";
    std::cout << "ERROR: there's an error\n\n";
}

void	Harl::displayComplain(int index)
{
    void (Harl::*func[4])(void) = {
        &Harl::_debug,
        &Harl::_info,
        &Harl::_warning,
        &Harl::_error
    };

	while (index < 4)
	{
		(this->*func[index])();
		index++;
	}
}

//public
void    Harl::complain(std::string level)
{
	int	index = -1;
    std::string levels[4] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    for (int i = 0; i < 4; i++) {
        if (levels[i] == level) {
			index = i;
        }
    }
	switch (index) {
		case 0:
		case 1:
		case 2:
		case 3:
			displayComplain(index);
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break;
	}
}
