/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 20:22:52 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/17 20:42:58 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	setHitpoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
    std::cout << "[ScavTrap] Instance " << this->getName() << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other) {
	std::cout << "[ScavTrap] Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "[ScavTrap] Destroy ScavTrap instance" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other) {
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "ScavTrap assignement operator called" << std::endl;
	return (*this);
}

void    ScavTrap::guardGate(void) {
    std::cout << "ScavTrap is now in Gate keeper mode\n";
}
void    ScavTrap::attack(const std::string &target) {

    if (this->getHitpoints() <= 0 || this->getEnergyPoints() == 0) {
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