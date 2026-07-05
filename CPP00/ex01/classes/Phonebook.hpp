/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 10:10:20 by lude-mat          #+#    #+#             */
/*   Updated: 2026/04/22 23:39:33 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class Phonebook {
	private:
		Contact contacts[8];
		int		count;
		int		index;

	public:
		Phonebook();

		int		hasContacts(void);
		int		renderContacts(void);
		void	addContact(Contact contact);
		int		getNbContacts(void);
		int		getIndex(void);
		Contact	getSpecificContact(int index);
};

#endif
