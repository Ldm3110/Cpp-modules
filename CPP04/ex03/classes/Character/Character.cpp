/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 15:28:48 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/24 14:31:35 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "../Materia/Materia.hpp"

Character::Character(std::string name): name(name) {
	for (int i = 0; i < 4; i++) {
		this->slots[i] = NULL;
	}
}

Character::Character(const Character &other) {
	*this = other;
}

Character	&Character::operator=(const Character &other) {
	if (this != &other) {
		this->name = other.name;
		for (int i = 0; i < 4; i++) {
			if (this->slots[i] != NULL) {
				delete this->slots[i];
				this->slots[i] = NULL;
			}
			if (other.slots[i] != NULL) {
				this->slots[i] = other.slots[i]->clone();
			} else {
				this->slots[i] = NULL;
			}
		}
	}
	return *this;
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (this->slots[i] != NULL) {
			delete this->slots[i];
		}
	}
}

const std::string	&Character::getName(void) const {
	return this->name;
}

void	Character::displayCharacter(void) {
	std::cout << "\n[Character] " << this->getName() << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->slots[i] != NULL) {
			std::cout << "[Character] slot " << i << " --- "
				<< this->slots[i]->getType() << std::endl;
		} else {
			std::cout << "[Character] slot " << i << " --- empty" << std::endl; 
		}
	}
	std::cout << std::endl;
}

void	Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (this->slots[i] == NULL) {
			this->slots[i] = m;
			return ;
		}
	}
	delete m;
}

void	Character::use(int idx, ICharacter &target) {
	if (this->slots[idx] == NULL) {
		std::cout << "Hey " << this->getName() <<  " !! You really want to attack " 
			<< target.getName() << " without Materia ?? " << std::endl;
		return ;
	}
	this->slots[idx]->use(target);
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx > 3) {
		std::cout << "[Character] invalid index" << std::endl;
		return ;
	}
	this->slots[idx] = NULL;
}

AMateria	*Character::getMateria(int idx) {
	if (idx < 0 || idx > 3) {
		std::cout << "[Character] unvalid index" << std::endl;
	}
	return this->slots[idx];
}