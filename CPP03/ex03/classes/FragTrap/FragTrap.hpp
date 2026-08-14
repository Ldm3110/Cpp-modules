/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 20:22:50 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/14 15:37:12 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include "../ClapTrap/ClapTrap.hpp"
#include <iostream>

class FragTrap : public virtual ClapTrap {

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &other);
		~FragTrap();
		
		FragTrap &operator=(const FragTrap &other);
		
		void    attack(const std::string &target);
		void    highFiveGuys(void);
	
	protected:
		static const int HITPOINTS = 100;
		static const int ATTACKDAMAGE = 30;
		static const int ENERGYPOINTS = 100;
};

#endif