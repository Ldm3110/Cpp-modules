/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humana.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 13:33:31 by lude-mat          #+#    #+#             */
/*   Updated: 2026/04/27 13:52:11 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "humanA.hpp"

HumanA::HumanA(
    std::string name,
    Weapon &w
) : _name(name), _w(w) {}

void    HumanA::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_w.getType() << std::endl;
}