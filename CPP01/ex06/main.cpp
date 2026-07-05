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
        std::cout << "Bad number of args\n";
        return 1;
    }
    Harl            harl;
    std::string     level = argv[1];
   
	harl.complain(level);
    return 0;
}
