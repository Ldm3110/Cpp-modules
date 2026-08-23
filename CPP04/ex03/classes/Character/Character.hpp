/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 15:28:51 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/23 18:55:13 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>

class AMateria;

class ICharacter {
	public:
		virtual 					~ICharacter() {}

		virtual std::string const 	&getName() const = 0;
		virtual void 				equip(AMateria* m) = 0;
		virtual void 				unequip(int idx) = 0;
		virtual void 				use(int idx, ICharacter& target) = 0;
		
		virtual void				displayCharacter(void) = 0;
		virtual AMateria			*getMateria(int idx) = 0;
};

class Character: public ICharacter {
	private:
		std::string	name;
		AMateria	*slots[4];
		
	public:
		Character(std::string name);
		Character(const Character &other);
		~Character();

		Character	&operator=(const Character &other);

		const std::string	&getName(void) const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);

		void				displayCharacter(void);
		AMateria			*getMateria(int idx);
};

#endif