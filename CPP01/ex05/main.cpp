/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 21:04:25 by lude-mat          #+#    #+#             */
/*   Updated: 2026/04/27 21:54:29 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/Harl.hpp"

int main(void)
{ 
    Harl            harl;
    
    // declare pointer to function member
    void (Harl::*ptrFunction)(std::string level) = &Harl::complain;
    (harl.*ptrFunction)("ERROR");
    return 0;
}