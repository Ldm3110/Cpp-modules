/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 11:59:26 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/18 12:11:11 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal() {
	this->type = "Cat";
	this->catBrain = new Brain("It's good to be a cat !!");
    std::cout << RED << "[Cat] I build a " << this->type << RESET << std::endl;
};

Cat::Cat(std::string type): Animal(type) {
	this->catBrain = new Brain();
}

Cat::Cat(const Cat &other): Animal(other) {}

Cat::~Cat() {
	delete this->catBrain;
    std::cout << RED << "[Cat] Remove instance !" << RESET << std::endl;
}

Cat	&Cat::operator=(const Cat &other) {
	if (this != &other) {
		Animal::operator=(other);
		this->catBrain = new Brain();
	}
	return *this;
}

void    Cat::makeSound() const {
    std::cout << RED << "[Cat] Miaouuuuuuuuuu" << RESET << std::endl;
}

Brain	&Cat::getBrain(void) const {
	return *this->catBrain;
}