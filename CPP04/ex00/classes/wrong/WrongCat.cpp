/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:30:54 by lude-mat          #+#    #+#             */
/*   Updated: 2026/05/20 12:37:55 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    type = "It's a wrong CATTTTT\n";
    std::cout << "Beuuuurk a wrong cat ....\n";
}

WrongCat::~WrongCat() {
    std::cout << "I kill this wrong cat ....\n";
}
