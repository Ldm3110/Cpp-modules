/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 23:03:50 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/22 23:16:32 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria() {
	this->type = "cure";
}

Cure::Cure(const Cure &other): AMateria(other) {
	*this = other;
}

Cure	&Cure::operator=(const Cure &other) {
	if (this != &other) {
		AMateria::operator=(other);
	}
	return *this;
}

Cure::~Cure() {}

AMateria	*Cure::clone(void) const {
	return new Cure(*this);
}