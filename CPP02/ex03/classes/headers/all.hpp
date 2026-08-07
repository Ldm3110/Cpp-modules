/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 16:18:44 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/06 16:20:06 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALL_HPP
# define ALL_HPP

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point point);
std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif