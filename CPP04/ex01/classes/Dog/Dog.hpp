/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 17:03:05 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/14 16:53:11 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "../Animal/Animal.hpp"

class Dog : public Animal {
    public:
    Dog();
	Dog(std::string type);
	Dog(const Dog &other);
    ~Dog();

	Dog	&operator=(const Dog &other);

    void makeSound() const;
};

#endif