/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 22:49:40 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/14 15:30:35 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	std::cout << "[FragTrap] Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	setHitpoints(HITPOINTS);
	setEnergyPoints(ENERGYPOINTS);
	setAttackDamage(ATTACKDAMAGE);
	std::cout << "[FlagTrap] FlagTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other) {
	std::cout << "[FragTrap] Copy constructor called" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "[FragTrap] Destroy instance" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &other) {
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "[FlagTrap] Copy assignment operator called" << std::endl;
	return (*this);
}

void    FragTrap::attack(const std::string &target) {
    if (this->getHitpoints() == 0 || this->getEnergyPoints() == 0) {
        std::cout << "Not enough hitpoints/energy points to attack ... sorry !";
        return ;
    }
    std::cout 
            << "[FragTrap] " 
            << this->getName() 
            << " attacks " 
            << target
            << ", causing "
            << this->getDamage()
            << " points of damage !\n";
    this->setEnergyPoints();
}

void    FragTrap::highFiveGuys(void) {
    std::cout << "Hey Buddy !!! let's all high-five !\n";
}