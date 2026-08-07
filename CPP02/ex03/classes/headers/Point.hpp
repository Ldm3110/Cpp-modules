/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 15:54:09 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/06 16:49:27 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
	private:
		Fixed const	x;
		Fixed const	y;

	public:
		Point();
		Point(Fixed const x, Fixed const y);
		Point(const Point &other);
		~Point();

		Point& operator=(const Point &other);

		Fixed	getX(void) const;
		Fixed	getY(void) const;
};

#endif