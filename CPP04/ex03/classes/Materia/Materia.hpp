/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 10:29:08 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/22 23:35:29 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class AMateria {
	protected:
		std::string	type;

	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &other);
		virtual ~AMateria();
		
		AMateria	&operator=(const AMateria &other);

		std::string const	&getType() const;
		virtual AMateria	*clone() const = 0;
		void				getInfo(void) const;
		//virtual void 		use(ICharacter& target);
};

#endif