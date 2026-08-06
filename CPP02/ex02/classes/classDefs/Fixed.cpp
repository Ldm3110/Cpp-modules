/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 14:52:16 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/06 14:50:27 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Fixed.hpp"

const int Fixed::_fractBits = 8;

// constructors

Fixed::Fixed(): _value(0) {}

Fixed::Fixed(int value) {
	this->_value = value * (1 << Fixed::_fractBits);
}

Fixed::Fixed(const float floatValue) {
    this->_value = floatValue * (1 << Fixed::_fractBits);
}

Fixed::Fixed(const Fixed &other) {
    this->_value = other.getRawBits();
}

bool    Fixed::operator < (const Fixed &other) const {
    return (this->toFloat() < other.toFloat()); 
}

bool    Fixed::operator > (const Fixed &other) const {
    return (this->toFloat() > other.toFloat()); 
}

bool    Fixed::operator >= (const Fixed &other) const {
    return (this->toFloat() >= other.toFloat()); 
}

bool    Fixed::operator <= (const Fixed &other) const {
    return (this->toFloat() <= other.toFloat()); 
}

bool    Fixed::operator == (const Fixed &other) const {
    return (this->toFloat() == other.toFloat()); 
}

bool    Fixed::operator != (const Fixed &other) const {
    return (this->toFloat() != other.toFloat()); 
}

Fixed Fixed::operator * (const Fixed &other) const {
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator + (const Fixed &other) const {
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator - (const Fixed &other) const {
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator / (const Fixed &other) const {
    return Fixed(this->toFloat() / other.toFloat());
}

// post incr/decr
Fixed& Fixed::operator --(void){
    this->_value -= 1;
    return *this;
}

Fixed& Fixed::operator ++(void){
    this->_value += 1;
    return *this;
}

// incr/decr
Fixed Fixed::operator --(int){
    Fixed temp = *this;
    this->_value -= 1;
    return temp;
}

Fixed Fixed::operator ++(int){
    Fixed temp = *this;
    this->_value += 1;
    return temp;
}

Fixed &Fixed::operator = (const Fixed &other) {
    if (this != &other)
        _value = other.getRawBits();
    return *this;
}

Fixed::~Fixed() {}

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

Fixed	&Fixed::min(Fixed &a, Fixed &b) {
	return (a < b) ? a : b;
}

Fixed const	&Fixed::min(const Fixed &a, const Fixed &b) {
	return (a < b) ? a : b;
}

Fixed	&Fixed::max(Fixed &a, Fixed &b) {
	return (a > b) ? a : b;
}

Fixed const	&Fixed::max(const Fixed &a, const Fixed &b) {
	return (a > b) ? a : b;
}
// others

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
    os << fixed.toFloat();
    return os;
}