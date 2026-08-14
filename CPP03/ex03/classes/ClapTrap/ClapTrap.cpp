/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 19:02:43 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/14 14:42:17 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Unknow"), _hitpoints(0), _energyPoints(0), _attackDamage(0) {}

ClapTrap::ClapTrap(std::string name): _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "[ClapTrap] Instance " << _name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	*this = other;
	std::cout << "[ClapTrap] Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "[ClapTrap] Instance " << getName() << " removed" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	if (this != &other) {
		this->_name = other._name;
		this->_attackDamage = other._attackDamage;
		this->_energyPoints = other._energyPoints;
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

void	ClapTrap::setEnergyPoints(int ep) {
	this->_energyPoints = ep;
}

void	ClapTrap::setHitpoints(int hp) {
	this->_hitpoints = hp;
}

void	ClapTrap::setAttackDamage(int ad) {
	this->_attackDamage = ad;
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
            << "[ClapTrap] " 
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