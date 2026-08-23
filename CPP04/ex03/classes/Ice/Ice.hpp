/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 10:50:46 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/23 18:59:12 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "../Materia/Materia.hpp"
#include "../Character/Character.hpp"

class Ice: public AMateria {
	
	public:
		Ice();
		Ice(const Ice &other);
		~Ice();

		Ice	&operator=(const Ice &other);

		AMateria	*clone(void) const;
		void		use(ICharacter &target);
};

#endif