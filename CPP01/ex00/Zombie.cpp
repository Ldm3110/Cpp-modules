/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 23:57:50 by lude-mat          #+#    #+#             */
/*   Updated: 2026/03/28 00:36:26 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <ostream>


Zombie::Zombie(std::string name) {
	this->_name = name;
}

std::string Zombie::getName() {
	return (this->_name);
}

void	Zombie::announce() {
	std::cout << this->getName() + " : BraiiiiiiinnnzzzZ..." << std::endl;
}
