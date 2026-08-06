/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 14:52:16 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/06 14:04:11 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Fixed.hpp"

const int Fixed::_fractBits = 8;

// constructors

Fixed::Fixed(): _value(0) {
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(int value) {
	std::cout << "Int constructor called" << std::endl;
	this->_value = value * (1 << Fixed::_fractBits);
}

Fixed::Fixed(const float floatValue) {
	std::cout << "Float constructor called" << std::endl;
    this->_value = floatValue * (1 << Fixed::_fractBits);
}

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

// destructors

Fixed::~Fixed() {
    std::cout << "Destructor called\n";
}

// operator overloading

Fixed &Fixed::operator = (const Fixed &other) {
    std::cout << "Copy assignment operator called\n";
    if (this != &other)
        _value = other.getRawBits();
    return *this;
}

// methods

int Fixed::getRawBits(void) const {
    return this->_value;
}

void    Fixed::setRawBits(int const raw) {
    this->_value = raw;
}

float   Fixed::toFloat(void) const {
    return ((float)this->getRawBits() / (1 << Fixed::_fractBits));
}

int     Fixed::toInt(void) const {
    return (this->getRawBits() >> Fixed::_fractBits);
}

// others

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
    os << fixed.toFloat();
    return os;
}