/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:12:17 by Lesdem            #+#    #+#             */
/*   Updated: 2026/04/27 12:19:23 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main(int argv, char **argc)
{
	(void) argv;
	(void) argc;
	int		nbZ = 5;

	Zombie *z = zombieHorde(nbZ, "Lucien");
	for (int i = 0; i < nbZ; i++)
		std::cout << z[i].getName() << std::endl;
	delete[] z;
	return 0;
}
