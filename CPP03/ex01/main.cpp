/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 18:55:10 by lude-mat          #+#    #+#             */
/*   Updated: 2026/05/06 08:08:13 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/ClapTrap/ClapTrap.hpp"
#include "classes/ScavTrap/ScavTrap.hpp"

int main(void)
{
    ClapTrap    inst = ClapTrap("toto");
    ScavTrap    scav = ScavTrap("arnold");
    std::string ennemy = "Dark Vador";

    std::cout << "name of ClapTrap is " << inst.getName() << "\n";
    std::cout << "name of ScavTrap is " << scav.getName() << "\n";

    inst.attack("Babar");
    scav.attack(ennemy);

    return 0;
}