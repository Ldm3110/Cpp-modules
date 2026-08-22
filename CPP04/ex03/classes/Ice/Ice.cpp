/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 15:55:03 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/22 22:49:14 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria() {
	this->type = "ice";
}

Ice::Ice(const Ice &other): AMateria(other) {
	*this = other;
}

Ice	&Ice::operator=(const Ice &other) {
	if (this != &other) {
		AMateria::operator=(other);
	}
	return *this;
}

Ice::~Ice() {}

AMateria	*Ice::clone(void) const {
	return new Ice(*this);
}