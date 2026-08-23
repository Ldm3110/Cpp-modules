/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 22:21:53 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/23 18:59:53 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"

AMateria::AMateria() {}

AMateria::AMateria(const std::string &type): type(type) {}

AMateria::AMateria(const AMateria &other) {
	*this = other;
}

AMateria	&AMateria::operator=(const AMateria &other) {
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

const std::string	&AMateria::getType(void) const {
	return this->type;
}

AMateria::~AMateria() {}

void	AMateria::getInfo(void) const {
	std::cout << this->type << " at address " << this << std::endl;
}

void	AMateria::use(ICharacter &target) {
	(void) target;
}