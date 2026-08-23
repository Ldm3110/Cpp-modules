/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 10:50:46 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/23 15:16:58 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "../Materia/Materia.hpp"

class Ice: public AMateria {
	
	public:
		Ice();
		Ice(const Ice &other);
		~Ice();

		Ice	&operator=(const Ice &other);

		AMateria	*clone(void) const;
};

#endif