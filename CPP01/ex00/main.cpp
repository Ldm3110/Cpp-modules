/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 00:22:35 by lude-mat          #+#    #+#             */
/*   Updated: 2026/07/15 13:30:15 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/headers/Zombie.hpp"

Zombie *newZombie(std::string name) {
  Zombie *zombie = new Zombie(name);
  return (zombie);
}

void randomChump( std::string name )
{
	Zombie zombie(name);
	zombie.announce();
}

int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	Zombie *zombie;

	zombie = newZombie("Boris");
	randomChump("Yuri");
	delete(zombie);
	return (0);
}
