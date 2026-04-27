/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 13:23:35 by lude-mat          #+#    #+#             */
/*   Updated: 2026/04/27 14:01:34 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include <iostream>
#include "weapon.hpp"

class HumanA {

    private:
    std::string _name;
    Weapon      &_w;

    public:
    HumanA(std::string name, Weapon &w);

    void    attack(void);
};

#endif
