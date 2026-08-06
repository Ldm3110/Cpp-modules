/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 14:52:16 by lude-mat          #+#    #+#             */
/*   Updated: 2026/07/23 12:00:31 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Fixed.hpp"

const int Fixed::_fractBits = 8;

Fixed::Fixed(): _value(0) {
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    this->_value = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called\n";
    if (this != &other)
        this->_value = other.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called\n";
    return this->_value;
}

void    Fixed::setRawBits(int const raw) {
    this->_value = raw;
}