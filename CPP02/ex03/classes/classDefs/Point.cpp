/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 16:00:28 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/06 17:21:54 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Point.hpp"

Point::Point() {
	Fixed x = 0;
	Fixed y = 0;
}

Point::Point(const Fixed x, const Fixed y): x(x), y(y) {}

Point::Point(const Point &other): x(other.x), y(other.y) {}

Point::~Point() {}

Point	&Point::operator = (const Point &other) {
	(void)other;
	return *this;	
}

Fixed	Point::getX(void) const {
	return this->x;
}

Fixed	Point::getY(void) const {
	return this->y;
}

// std::ostream &operator<<(std::ostream &os, const Point &point) {
//     os << fixed.toFloat();
//     return os;
// }