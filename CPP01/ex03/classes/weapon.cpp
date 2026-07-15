/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 13:36:49 by lude-mat          #+#    #+#             */
/*   Updated: 2026/07/15 14:56:51 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}

void Weapon::setType(std::string newType)
{
    this->_type = newType;
}

std::string Weapon::getType() const
{
    return this->_type;
}