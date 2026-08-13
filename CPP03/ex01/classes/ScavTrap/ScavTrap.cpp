/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 20:22:52 by lude-mat          #+#    #+#             */
/*   Updated: 2026/07/07 22:54:42 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
    _energyPoints = 50;
    _attackDamage = 50;
    std::cout << "\nConstructor of ScavTrap\n\n";
}

ScavTrap::~ScavTrap() {
    std::cout << "\nDestroy ScavTrap instance\n\n";
}

void    ScavTrap::guardGate(void) {
    std::cout << "ScavTrap is now in Gate keeper mode\n";
}
void    ScavTrap::attack(const std::string &target) {

    if (this->getHitpoints() == 0 || this->getEnergyPoints() == 0) {
        std::cout << "Not enough hitpoints/energy points to attack ... sorry !";
        return ;
    }
    std::cout 
            << "ScavTrap " 
            << this->getName() 
            << " attacks " 
            << target
            << ", causing "
            << this->getDamage()
            << " points of damage !\n";
    this->setEnergyPoints();
}