/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 13:57:32 by lude-mat          #+#    #+#             */
/*   Updated: 2026/04/27 14:18:50 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include <iostream>
#include "weapon.hpp"

class HumanB {

    private:
    std::string _name;
    Weapon      *_w;    

    public:
    HumanB(std::string name);

    void    attack(void);
    void    setWeapon(Weapon &w);
};

#endif