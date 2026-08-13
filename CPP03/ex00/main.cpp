/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 18:55:10 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/13 22:29:55 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/ClapTrap.hpp"

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
    std::string ennemy = "Dark Vador";

    inst.attack(ennemy);
	displayStatus(&inst);
	inst.attack("other ennemy");
	displayStatus(&inst);
	inst.takeDamage(6);
	displayStatus(&inst);
	inst.beRepaired(3);
	displayStatus(&inst);
    return 0;
}