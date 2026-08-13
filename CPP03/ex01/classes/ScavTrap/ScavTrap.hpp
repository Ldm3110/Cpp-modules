/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 20:22:50 by lude-mat          #+#    #+#             */
/*   Updated: 2026/05/06 08:06:52 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "../ClapTrap/ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap {

    public:
    ScavTrap(std::string name);
    ~ScavTrap();
    void    attack(const std::string &target);
    void    guardGate(void);
};

#endif