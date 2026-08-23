/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 11:59:26 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/20 14:59:13 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): AAnimal() {
	this->type = "Cat";
	this->catBrain = new Brain("It's good to be a cat !!");
    std::cout << RED << "[Cat] I build a " << this->type << RESET << std::endl;
};

Cat::Cat(std::string type): AAnimal(type) {
	this->catBrain = new Brain();
}

Cat::Cat(const Cat &other): AAnimal(other) {}

Cat::~Cat() {
	delete this->catBrain;
    std::cout << RED << "[Cat] Remove instance !" << RESET << std::endl;
}

Cat	&Cat::operator=(const Cat &other) {
	if (this != &other) {
		AAnimal::operator=(other);
		this->catBrain = new Brain();
	}
	return *this;
}

std::string Cat::getType(void) const {
	return this->type;
}

void    Cat::makeSound() const {
    std::cout << RED << "[Cat] Miaouuuuuuuuuu" << RESET << std::endl;
}

std::string	Cat::giveMeAnIdea(int index) const {
	return this->catBrain->giveMeAnIdea(index);
}