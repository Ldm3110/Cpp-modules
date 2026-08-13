/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 18:55:10 by lude-mat          #+#    #+#             */
/*   Updated: 2026/07/08 14:16:16 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/ClapTrap/ClapTrap.hpp"
#include "classes/ScavTrap/ScavTrap.hpp"
#include "classes/FragTrap/FragTrap.hpp"

int main(void)
{
    ClapTrap    clap = ClapTrap("toto");
    ScavTrap    scav = ScavTrap("arnold");
    FragTrap    frag = FragTrap("Willy");
    std::string ennemy = "Dark Vador";

    std::cout << "name of ClapTrap is " << inst.getName() << "\n";
    std::cout << "name of ScavTrap is " << scav.getName() << "\n";
    std::cout << "name of FragTrap is " << frag.getName() << "\n";

    inst.attack("Babar");
    scav.attack(ennemy);
    frag.highFivexGuys();

    return 0;
}