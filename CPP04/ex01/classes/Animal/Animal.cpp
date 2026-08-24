/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 17:08:39 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/24 15:08:05 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    type = "Seagulls";
    std::cout << "[Animal] I build a " << this->type << std::endl;
}

Animal::Animal(std::string type): type(type) {}

Animal::Animal(const Animal &other) {
	*this = other;
}

Animal::~Animal() {
    std::cout << "[Animal] Remove instance !\n" << std::endl;
}

Animal	&Animal::operator=(const Animal &other) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

void    Animal::makeSound() const {
    std::cout << "[Animal] tweet tweet tweet" << std::endl;
}

std::string Animal::getType() const {
    return this->type;
}

std::ostream &operator<<(std::ostream &os, const Animal &animal) {
	os << animal.getType();
	return os;
}

std::string	Animal::giveMeAnIdea(int index) const {
	(void) index;
	return "Sorry, I don't have any ideas !!!";
}