/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 18:55:10 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/14 11:17:34 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/all.hpp"

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
	std::cout << "=== INSTANCE CREATION ===" << std::endl;
    ClapTrap    clap = ClapTrap("toto");
    ScavTrap    scav = ScavTrap("arnold");
    FragTrap    frag = FragTrap("Willy");
	std::cout << "=== END OF INSTANCE CREATION ===\n" << std::endl;
    std::string ennemy = "Dark Vador";

    std::cout << "name of ClapTrap is " << clap.getName() << "\n";
    std::cout << "name of ScavTrap is " << scav.getName() << "\n";
    std::cout << "name of FragTrap is " << frag.getName() << "\n" << std::endl;

    clap.attack("Babar");
	displayStatus(&clap);
    scav.attack(ennemy);
	displayStatus(&scav);
	frag.attack("Doku");
	frag.takeDamage(37);
	displayStatus(&frag);
    frag.highFiveGuys();

	std::cout << "\n=== CALLING DESTRUCTORS ===" << std::endl;
    return 0;
}