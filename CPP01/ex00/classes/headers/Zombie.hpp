/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 23:53:24 by lude-mat          #+#    #+#             */
/*   Updated: 2026/07/15 13:25:32 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

private:
  std::string _name;

public:
  Zombie(std::string name);
  ~Zombie();

  void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
