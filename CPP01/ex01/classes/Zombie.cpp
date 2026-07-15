/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:09:58 by Lesdem            #+#    #+#             */
/*   Updated: 2026/07/15 13:57:27 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/Zombie.hpp"
#include <iostream>
#include <ostream>

Zombie::Zombie() {}

Zombie::Zombie(std::string name) : _name(name) {
  std::cout << "Instance created\n";
}

Zombie::~Zombie(void) {
  std::cout << "Destructor kill " + this->_name << std::endl; 
}

void Zombie::announce() {
  std::cout << this->_name + " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}
