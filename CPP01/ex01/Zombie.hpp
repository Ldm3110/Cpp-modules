/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:07:56 by Lesdem            #+#    #+#             */
/*   Updated: 2026/04/27 13:32:16 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

	private:
		std::string _name;

	public:
		Zombie();
		Zombie(std::string name);
		~Zombie() { std::cout << "Destructor kill " + this->_name << std::endl; };

		void announce(void);
		std::string getName();
		void setName(std::string name);
};

Zombie	*zombieHorde( int N, std::string name );

#endif
