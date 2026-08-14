/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:30:54 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/14 22:04:51 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    type = "[type] It's a wrong CATTTTT\n";
    std::cout << "[WrongCat] Beuuuurk a wrong cat is create\n";
}

WrongCat::WrongCat(std::string type): WrongAnimal(type) {}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal(other) {}

WrongCat::~WrongCat() {
    std::cout << "[WrongCat] Destroy instance" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &other) {
	if (this != &other)
		WrongAnimal::operator=(other);
	return *this;
}
