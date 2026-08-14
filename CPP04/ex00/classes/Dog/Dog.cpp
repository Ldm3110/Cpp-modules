/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 17:11:49 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/14 21:41:33 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog(): Animal() {
	this->type = "Dog";
    std::cout << "[Dog] I build a " << this->type << std::endl;
}

Dog::Dog(std::string type): Animal(type) {}

Dog::Dog(const Dog &other): Animal(other) {}

Dog::~Dog() {
    std::cout << "[Dog] Remove instance !" << std::endl;
}

Dog	&Dog::operator=(const Dog &other) {
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

void    Dog::makeSound() const {
    std::cout << "[Dog] Ouaf Ouaf\n";
}