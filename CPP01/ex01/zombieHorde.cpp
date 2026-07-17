/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:13:57 by Lesdem            #+#    #+#             */
/*   Updated: 2026/07/17 08:17:48 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/headers/Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name )
{
	if (N <= 0)
		return (NULL);
	Zombie *z = new Zombie[N];

	for (int i = 0; i < N; i++)
		z[i].setName(name);
	return z;
}