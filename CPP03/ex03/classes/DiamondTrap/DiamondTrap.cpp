/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 11:39:19 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/14 15:53:53 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {}

DiamondTrap::DiamondTrap(std::string name):
	ClapTrap(name + "_clap_name"),
	FragTrap(name),
	ScavTrap(name),
	_name(name)
{
	setHitpoints(FragTrap::HITPOINTS);
	setAttackDamage(FragTrap::ATTACKDAMAGE);
	setEnergyPoints(ScavTrap::ENERGYPOINTS);
	std::cout << "[DiamondTrap] Instance " << this->_name << "created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other):
	ClapTrap(other),
	FragTrap(other),
	ScavTrap(other),
	_name(other._name)
{
	*this = other;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &other) {
	if (this != &other) {
		ClapTrap::operator=(other);
		this->_name = other._name;
	}
	std::cout << "[DiamondTrap] Assignment operator called" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "[DiamondTrap] Destructor called" << std::endl;
}

void    DiamondTrap::attack(const std::string &target) {
    if (this->getHitpoints() == 0 || this->getEnergyPoints() == 0) {
        std::cout << "Not enough hitpoints/energy points to attack ... sorry !";
        return ;
    }
    std::cout 
            << "[DiamondTrap] " 
            << this->getName() 
            << " attacks " 
            << target
            << ", causing "
            << this->getDamage()
            << " points of damage !\n";
    this->setEnergyPoints();
}

std::string	DiamondTrap::getName(void) {
	return this->_name;
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "Who am I ?? a lot of things !!!!" << std::endl;
}