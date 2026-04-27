/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 21:04:25 by lude-mat          #+#    #+#             */
/*   Updated: 2026/04/27 21:45:29 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/Harl.hpp"

int main(int argc, char **argv)
{ 
    if (argc != 2)
    {
        std::cout << "Bad number of args - Expected 2\n";
        return 1;
    }
    Harl            harl;
    std::string     level = argv[1];
    
    // declare pointer to function member
    void (Harl::*ptrFunction)(std::string level) = &Harl::complain;
    (harl.*ptrFunction)(level);
    return 0;
}