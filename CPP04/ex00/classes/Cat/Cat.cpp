/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 11:59:26 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/14 21:51:27 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal() {
	this->type = "Cat";
    std::cout << "[Cat] I build a " << this->type << std::endl;
};

Cat::Cat(std::string type): Animal(type) {}

Cat::Cat(const Cat &other): Animal(other) {}

Cat::~Cat() {
    std::cout << "[Cat] Remove instance !" << std::endl;
}

Cat	&Cat::operator=(const Cat &other) {
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

void    Cat::makeSound() const {
    std::cout << "[Cat] Miaouuuuuuuuuu" << std::endl;
}