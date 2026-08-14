/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 20:22:50 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/14 10:40:23 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include "../ClapTrap/ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap {

    public:
	FragTrap();
    FragTrap(std::string name);
	FragTrap(const FragTrap &other);
    ~FragTrap();
	
	FragTrap &operator=(const FragTrap &other);
    
	void    attack(const std::string &target);
    void    highFiveGuys(void);
};

#endif