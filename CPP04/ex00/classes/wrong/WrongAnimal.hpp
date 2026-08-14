/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:19:06 by lude-mat          #+#    #+#             */
/*   Updated: 2026/05/20 12:21:30 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>

class WrongAnimal {
    protected:
    std::string type;

    public:
    WrongAnimal();
    virtual ~WrongAnimal();

    virtual void        makeSound() const;
    virtual std::string getType() const;
};

#endif