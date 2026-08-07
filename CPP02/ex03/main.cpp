/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 13:29:02 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/07 11:42:26 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/headers/all.hpp"

#include <iostream>

int main(void) {

	Point a(Fixed(-4), Fixed(4));
	Point b(Fixed(7.4f), Fixed(3.63f));
	Point c(Fixed(-2.38f), Fixed(-2.45f));
	Point point(Fixed(0.62f), Fixed(1.95f));
	
	bool isInside = bsp(a, b, c, point);
	if (isInside)
		std::cout << "Inside the triangle" << std::endl;
	else
		std::cout << "Outside the triangle" << std::endl;
	return 0;
}