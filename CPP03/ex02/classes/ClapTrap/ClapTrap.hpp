/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 18:57:23 by lude-mat          #+#    #+#             */
/*   Updated: 2026/05/05 19:52:42 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>

class ClapTrap {
    private:

    std::string _name;
    int         _hitpoints;
    int         _energyPoints;
    int         _attackDamage;

    public:

    ClapTrap(std::string name);
    ~ClapTrap();

    // getter
    std::string getName(void);
    int         getHitpoints(void);
    int         getEnergyPoints(void);
    int         getDamage(void);
    //setter
    void        setEnergyPoints(void);
    // actions
    void        attack(const std::string &target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);

};

#endif