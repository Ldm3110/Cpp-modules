/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 18:55:10 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/14 00:04:46 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/ClapTrap/ClapTrap.hpp"
#include "classes/ScavTrap/ScavTrap.hpp"

void	displayStatus(ClapTrap *instance) {
	std::cout 
		<< instance->getName()
		<< " || Hitpoints = "
		<< instance->getHitpoints()
		<< " - Energy points remaining = "
		<< instance->getEnergyPoints()
		<< "\n"
		<< std::endl;
}

int main(void)
{
    ClapTrap    inst = ClapTrap("toto");
    ScavTrap    scav = ScavTrap("arnold");
    std::string ennemy = "Dark Vador";

    std::cout << "\nname of ClapTrap is " << inst.getName() << "\n";
    std::cout << "name of ScavTrap is " << scav.getName() << "\n" << std::endl;

    inst.attack("Babar");
	displayStatus(&inst);
    scav.attack(ennemy);
	displayStatus(&scav);
	scav.guardGate();

    return 0;
}