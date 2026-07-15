/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 23:57:50 by lude-mat          #+#    #+#             */
/*   Updated: 2026/07/15 13:27:04 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/Zombie.hpp"
#include <iostream>
#include <ostream>

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie(void) {
  std::cout << "Destructor kill " + this->_name << std::endl;
}

void Zombie::announce() {
  std::cout << this->_name + " : BraiiiiiiinnnzzzZ..." << std::endl;
}