/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:12:17 by Lesdem            #+#    #+#             */
/*   Updated: 2026/07/15 13:50:15 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "classes/headers/Zombie.hpp"

int	main(int argv, char **argc)
{
	(void) argv;
	(void) argc;
	int		nbZ = 3;

	Zombie *z = zombieHorde(nbZ, "Lucien");
	for (int i = 0; i < nbZ; i++)
		z[i].announce();
	delete[] z;
	return 0;
}
