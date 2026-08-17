/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 11:39:19 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/17 20:59:41 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():
	ClapTrap(),
	FragTrap(),
	ScavTrap() {}

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
	ScavTrap::attack(target);
}

std::string	DiamondTrap::getName(void) {
	return this->_name;
}

void	DiamondTrap::whoAmI(void) {
	std::cout 
		<< "[DiamondTrap name] " << this->getName() 
		<< " --- " 
		<< "[ClapTrap name] " << ClapTrap::getName() << "\n" << std::endl;
}