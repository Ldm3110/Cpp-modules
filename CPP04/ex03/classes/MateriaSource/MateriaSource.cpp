/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 17:39:01 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/23 17:22:12 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		this->slots[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other) {
	*this = other;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &other) {
	if (this != &other) {
		for (int i = 0; i < 4; i++) {
			if (other.slots[i] != NULL) {
				this->slots[i] = other.slots[i];
			} else {
				this->slots[i] = NULL;
			}
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (this->slots[i] != NULL)	
			delete this->slots[i];
	}
}

void	MateriaSource::learnMateria(AMateria *obj) {
	for (int i = 0; i < 4; i++) {
		if (this->slots[i] == NULL) {
			this->slots[i] = obj;
			// std::cout << "Add object in slot " << i << std::endl;
			return ;
		}
	}
	std::cout << "No more slots available -> remove object" << std::endl;
	delete obj;
}

AMateria	*MateriaSource::createMateria(std::string const &type) {
	for (int index = 0; index < 4; index++) {
		if (this->slots[index] != NULL
			&& this->slots[index]->getType() == type) {
				return this->slots[index]->clone();
		}	
	}
	return NULL;
}

void	MateriaSource::displaySlots(void) {
	std::cout << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->slots[i] != NULL) {
			std::cout << "[Materia Source] slot " << i << " -- " << this->slots[i]->getType()
			<< " (" << this->slots[i] << ")" << std::endl;
		}
	}
}