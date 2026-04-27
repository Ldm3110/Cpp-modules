/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 00:22:35 by lude-mat          #+#    #+#             */
/*   Updated: 2026/03/28 13:51:06 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	Zombie *zombie;

	zombie = newZombie("Boris");
	zombie->announce();
	randomChump("Yuri");
	delete(zombie);
	return (0);
}
