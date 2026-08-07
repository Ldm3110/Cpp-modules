/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 16:16:28 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/07 11:45:17 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/headers/all.hpp"

/**
 * Receive 3 points for the triangle and 1 other point
 * We can determinate if the 4th point is inside the triangle
 * If yes -> return True (1)
 * It no -> return False (0)
 * 
 * We check each edges in the same side (if triangle is ABC, first edge is AB,
 * then BC and CA)
 * We used this formula :
 * (ax - px)(by - py) - (ay - py)(bx - px)
 */
bool	bsp(const Point a, const Point b, const Point c, const Point point) {
	Fixed	ab(((a.getX() - point.getX())*(b.getY() - point.getY())) - ((a.getY() - point.getY())*(b.getX() - point.getX())));
	Fixed	bc(((b.getX() - point.getX())*(c.getY() - point.getY())) - ((b.getY() - point.getY())*(c.getX() - point.getX())));
	Fixed	ca(((c.getX() - point.getX())*(a.getY() - point.getY())) - ((c.getY() - point.getY())*(a.getX() - point.getX())));

	if ((ab > 0 && bc > 0 && ca > 0) || (ab < 0 && bc < 0 && ca < 0))
		return true;
	else
		return false;	
}