/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 22:49:40 by lude-mat          #+#    #+#             */
/*   Updated: 2026/07/08 14:55:12 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name) {
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::~FragTrap() {
    std::cout << "\nDestroy FragTrap instance\n";
}

void    FragTrap::highFivexGuys(void) {
    std::cout << "Hey Buddy !!! let's all high-five !\n";
}

void    FragTrap::attack(const std::string &target) {
    if (this->getHitpoints() == 0 || this->getEnergyPoints() == 0) {
        std::cout << "Not enough hitpoints/energy points to attack ... sorry !";
        return ;
    }
    std::cout 
            << "FragTrap " 
            << this->getName() 
            << " attacks " 
            << target
            << ", causing "
            << this->getDamage()
            << " points of damage !\n";
    this->setEnergyPoints();
}