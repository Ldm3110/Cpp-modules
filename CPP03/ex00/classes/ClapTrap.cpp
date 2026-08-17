/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 19:02:43 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/17 20:38:47 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	_name = "Unknown";
	_hitpoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name): _name(name) {
    ClapTrap::_hitpoints = 10;
    ClapTrap::_energyPoints = 10;
    ClapTrap::_attackDamage = 0;
    std::cout << "Instance " << _name << " created\n" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	*this = other;
}

ClapTrap::~ClapTrap() {
    std::cout << "\nInstance " << getName() << " removed" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	if (this != &other) {
		this->_name = other._name;
		this->_attackDamage = other._attackDamage;
		this->_energyPoints = other._attackDamage;
		this->_hitpoints = other._hitpoints;
	}
	return *this;
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
        std::cout << "Not enough hitpoints/energy points to attack ... sorry !" << std::endl;
        return ;
    }
    std::cout 
            << "ClapTrap " 
            << this->getName() 
            << " attacks " 
            << target
            << ", causing "
            << this->getDamage()
            << " points of damage !"
			<< std::endl;
    this->setEnergyPoints();
}

void    ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << this->getName() << " is attacked" << std::endl;
    this->_hitpoints -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount) {
    if (this->getHitpoints() == 0 || this->getEnergyPoints() == 0) {
        std::cout << "Not enough hitpoints/energy points to repair ... sorry !" << std::endl;
        return ;
    }
    std::cout
            << "ClapTrap "
            << this->getName()
            << " is being repaired" 
			<< " (" << amount << " HP)"
			<< std::endl;
    this->_hitpoints += amount;
    this->setEnergyPoints();
}