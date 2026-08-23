/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:26:29 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/14 21:56:32 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
    WrongCat();
	WrongCat(std::string type);
	WrongCat(const WrongCat &other);
    ~WrongCat();

	WrongCat	&operator=(const WrongCat &other);
};

#endif