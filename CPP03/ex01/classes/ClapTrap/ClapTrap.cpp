/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 19:02:43 by lude-mat          #+#    #+#             */
/*   Updated: 2026/05/06 07:37:24 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name) {
    ClapTrap::_hitpoints = 100;
    ClapTrap::_energyPoints = 50;
    ClapTrap::_attackDamage = 20;
    std::cout << "Instance " << _name << " created\n";
}

ClapTrap::~ClapTrap() {
    std::cout << "Instance " << getName() << " removed\n";
}

std::string ClapTrap::getName(void) {
    return this->_name;
}

int ClapTrap::getDamage(void) {
    return this->_attackDamage;
}

int ClapTrap::getHitpoints(void) {
    return this->_hitpoints;
}

int ClapTrap::getEnergyPoints(void) {
    return this->_energyPoints;
}

void    ClapTrap::setEnergyPoints() {
    this->_energyPoints--;
}

void    ClapTrap::attack(const std::string &target) {
    if (this->getHitpoints() == 0 || this->getEnergyPoints() == 0) {
        std::cout << "Not enough hitpoints/energy points to attack ... sorry !";
        return ;
    }
    std::cout 
            << "ClapTrap " 
            << this->getName() 
            << " attacks " 
            << target
            << ", causing "
            << this->getDamage()
            << " points of damage !\n";
    this->setEnergyPoints();
}

void    ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << this->getName() << " is attacked\n";
    this->_hitpoints -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount) {
    if (this->getHitpoints() == 0 || this->getEnergyPoints() == 0) {
        std::cout << "Not enough hitpoints/energy points to repair ... sorry !\n";
        return ;
    }
    std::cout
            << "ClapTrap "
            << this->getName()
            << " is being repaired\n";
    this->_hitpoints += amount;
    this->setEnergyPoints();
}