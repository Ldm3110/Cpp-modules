/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:12:17 by Lesdem            #+#    #+#             */
/*   Updated: 2026/07/17 08:19:56 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "classes/headers/Zombie.hpp"

int	main(int argv, char **argc)
{
	(void) argv;
	(void) argc;
	int		nbZ = 2;

	Zombie *z = zombieHorde(nbZ, "Lucien");
	if (!z)
	{
		std::cout << "bad numbers of Z !" << std::endl;
		return (1);
	}
	for (int i = 0; i < nbZ; i++)
		z[i].announce();
	delete[] z;
	return (0);
}
