/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:21:53 by lude-mat          #+#    #+#             */
/*   Updated: 2026/05/20 12:25:54 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    type = "a Wrong Animal";
    std::cout << "Built a new Wrong Animal\n";
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Destroy this Wrong Animal !!\n";
}

void    WrongAnimal::makeSound() const {
    std::cout << "Youhhhhhouuuuuhhhhhh\n";
}

std::string WrongAnimal::getType() const {
    return this->type;
}