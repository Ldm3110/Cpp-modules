/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 08:17:54 by lude-mat          #+#    #+#             */
/*   Updated: 2026/03/25 11:48:21 by lude-mat         ###   ########.fr       */
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
	
		void	getIdentity(void);
		void    printRow(int index);
};

#endif
