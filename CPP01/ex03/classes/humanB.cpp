/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 14:02:01 by lude-mat          #+#    #+#             */
/*   Updated: 2026/07/17 08:35:48 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/humanB.hpp"

HumanB::HumanB(std::string name): _name(name), _w(NULL) {}

void    HumanB::attack(void)
{
    if (this->_w)
        std::cout << this->_name << " attacks with their " << this->_w->getType() << std::endl;
    else
        std::cout << "He's trying to attack with his fists !!!" << std::endl;
}

void    HumanB::setWeapon(Weapon &w)
{
    this->_w = &w;
}