/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 20:22:50 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/13 23:20:03 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "../ClapTrap/ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap {

    public:
	ScavTrap();
    ScavTrap(std::string name);
	ScavTrap(const ScavTrap &other);
    ~ScavTrap();

	ScavTrap &operator=(const ScavTrap &other);

    void    attack(const std::string &target);
    void    guardGate(void);
};

#endif