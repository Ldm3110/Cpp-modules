/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 11:38:29 by lude-mat          #+#    #+#             */
/*   Updated: 2026/03/25 11:49:43 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

#include "../classes/Contact.hpp"

void		display_header(void);
std::string	truncate(std::string str, int width);
void		display_contact_data(Contact contact);

#endif
