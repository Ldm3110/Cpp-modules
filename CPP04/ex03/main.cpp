/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 17:22:31 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/24 14:33:14 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/all.hpp"

int	main(void) {
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());

	src->displaySlots();	
	
	ICharacter *me = new Character("The Hunter");
	me->displayCharacter();
	AMateria *tmp;
	tmp = src->createMateria("ice");
	tmp->getInfo();
	me->equip(tmp);
	me->displayCharacter();	
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->displayCharacter();
	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);

	AMateria *materiaOnFloor = me->getMateria(1);
	me->unequip(1);
	me->displayCharacter();
	
	delete bob;
	delete me;
	delete src;
	delete materiaOnFloor;

	return 0;
}