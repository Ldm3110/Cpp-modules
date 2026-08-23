/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 09:27:42 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/18 10:59:11 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
	private:
		std::string	ideas[100];

	public:
		Brain();
		Brain(std::string idea);
		Brain(const Brain &other);
		~Brain();

		Brain	&operator=(const Brain &other);
		std::string	giveMeAnIdea(int index);
};

#endif