/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 17:05:31 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/20 14:55:54 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "../Brain/Brain.hpp"

class Animal {
    protected:
    std::string type;

    public:
    Animal();
	Animal(std::string type);
	Animal(const Animal &other);
    virtual ~Animal();

	Animal	&operator=(const Animal &other);

    virtual void        makeSound() const;
    virtual std::string	getType() const;
	virtual std::string	giveMeAnIdea(int index) const;
};

#endif