/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 14:02:01 by lude-mat          #+#    #+#             */
/*   Updated: 2026/04/27 14:18:50 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "humanB.hpp"

HumanB::HumanB(std::string name): _name(name) {}

void    HumanB::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_w->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &w)
{
    this->_w = &w;
}