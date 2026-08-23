/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 17:11:49 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/20 11:45:41 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog(): Animal() {
	this->type = "Dog";
	this->dogBrain = new Brain("I want to eat this cat !!!!");
    std::cout << BLUE << "[Dog] I build a " << this->type << RESET << std::endl;
}

Dog::Dog(std::string type): Animal(type) {
	this->dogBrain = new Brain();
}

Dog::Dog(const Dog &other): Animal(other) {
	*this = other;
}

Dog::~Dog() {
	delete this->dogBrain;
    std::cout << BLUE << "[Dog] Remove instance !" << RESET << std::endl;
}

Dog	&Dog::operator=(const Dog &other) {
	if (this != &other) {
		Animal::operator=(other);
		this->dogBrain = new Brain();
	}
	return *this;
}

void    Dog::makeSound() const {
    std::cout << BLUE << "[Dog] Ouaf Ouaf" << RESET << std::endl;
}

Brain	&Dog::getBrain(void) const {
	return *this->dogBrain;
}

std::string	Dog::giveMeAnIdea(int index) const {
	return this->dogBrain->giveMeAnIdea(index);
}