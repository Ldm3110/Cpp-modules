/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 10:10:20 by lude-mat          #+#    #+#             */
/*   Updated: 2026/03/25 11:11:06 by lude-mat         ###   ########.fr       */
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

		void	renderContacts(void);
		void	addContact(Contact contact);
		int		getIndex(void);
		Contact	getSpecificContact(int index);
};

#endif
