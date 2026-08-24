/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 17:08:39 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/20 09:35:59 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal() {
    type = "Seagulls";
    std::cout << "[AAnimal] I build a " << this->type << std::endl;
}

AAnimal::AAnimal(std::string type): type(type) {}

AAnimal::AAnimal(const AAnimal &other) {
	*this = other;
}

AAnimal::~AAnimal() {
    std::cout << "[AAnimal] Remove instance !\n" << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &other) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

void    AAnimal::makeSound() const {
    std::cout << "[AAnimal] tweet tweet tweet\n\n";
}

std::string AAnimal::getType() const {
    return this->type;
}

std::ostream &operator<<(std::ostream &os, const AAnimal &AAnimal) {
	os << AAnimal.getType();
	return os;
}