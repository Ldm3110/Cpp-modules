/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 11:29:58 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/17 20:58:11 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/all.hpp"

void	displayStatus(DiamondTrap &instance) {
	std::cout 
		<< instance.getName()
		<< " || Hitpoints = "
		<< instance.getHitpoints()
		<< " - Energy points remaining = "
		<< instance.getEnergyPoints()
		<< " - Attack Damage Points = "
		<< instance.getDamage()
		<< "\n"
		<< std::endl;
}

int	main(void) {
	std::cout << "=== INSTANCE CREATION ===" << std::endl;
	DiamondTrap diamond = DiamondTrap("Ruby");
	std::cout << "=== END OF CREATION ===\n" << std::endl;

	displayStatus(diamond);
	diamond.whoAmI();
	return 0;
}