/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 13:36:49 by lude-mat          #+#    #+#             */
/*   Updated: 2026/07/17 08:39:20 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}

void Weapon::setType(const std::string &newType)
{
    this->_type = newType;
}

std::string Weapon::getType() const
{
    return this->_type;
}