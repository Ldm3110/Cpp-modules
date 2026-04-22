/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 08:17:54 by lude-mat          #+#    #+#             */
/*   Updated: 2026/04/21 14:15:46 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {

	private:
		std::string _first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_dark_secret;

	public:
		Contact();
		Contact(
			std::string first_name,
			std::string last_name,
			std::string nickname,
			std::string phone_number,
			std::string dark_secret);

		// getter
		void		getIdentity(void);
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickname(void);
		std::string	getPhoneNumber(void);
		std::string	getDarkSecret(void);

		// printer
		void    printRow(int index);
};

#endif
