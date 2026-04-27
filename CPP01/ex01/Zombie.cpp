/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:09:58 by Lesdem            #+#    #+#             */
/*   Updated: 2026/04/27 12:08:17 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <ostream>

Zombie::Zombie() {}

Zombie::Zombie(std::string name) : _name(name) {}

void Zombie::announce() {
  std::cout << this->getName() + " : BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName() { return (this->_name); }

void Zombie::setName(std::string name)
{
	this->_name = name;
}
