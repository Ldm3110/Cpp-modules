/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 15:33:50 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/22 22:57:42 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

#include <iostream>
#include "../Materia/Materia.hpp"

class IMateriaSource {
	public:
		virtual ~IMateriaSource() {};
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
		virtual void	displaySlots(void) = 0;	
};

class MateriaSource: public IMateriaSource {
	private:
		AMateria	*slots[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &other);
		~MateriaSource();

		MateriaSource	&operator=(const MateriaSource &other);

		void	learnMateria(AMateria*);
		AMateria *createMateria(std::string const &type);
		void	displaySlots(void);
};


# endif