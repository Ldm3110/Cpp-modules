/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 10:54:24 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/23 18:59:32 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "../Materia/Materia.hpp"
#include "../Character/Character.hpp"

class Cure: public AMateria {
	
	public:
		Cure();
		Cure(const Cure &other);
		~Cure();

		Cure &operator=(const Cure &other);

		AMateria	*clone(void) const;
		void		use(ICharacter &target);
		
};

#endif