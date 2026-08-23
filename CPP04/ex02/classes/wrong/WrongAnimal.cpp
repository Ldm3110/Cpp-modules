/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:21:53 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/14 22:03:56 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    type = "a Wrong Animal";
    std::cout << "Built a new Wrong Animal\n";
}

WrongAnimal::WrongAnimal(std::string type): type(type) {}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	*this = other;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "[Animal] Destroy this Wrong Animal !!\n";
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

void    WrongAnimal::makeSound() const {
    std::cout << "[Animal] Youhhhhhouuuuuhhhhhh\n";
}

std::string WrongAnimal::getType() const {
    return this->type;
}