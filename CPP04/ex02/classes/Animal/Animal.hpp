/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 17:05:31 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/20 14:56:53 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include "../Brain/Brain.hpp"

class AAnimal {
    protected:
    std::string type;
	
    public:

	AAnimal();
	AAnimal(std::string type);
	AAnimal(const AAnimal &other);
    virtual ~AAnimal();
	
	AAnimal	&operator=(const AAnimal &other);

    virtual void        makeSound(void) const = 0;
    virtual std::string getType(void) const = 0;
	virtual std::string	giveMeAnIdea(int index) const = 0;
};

#endif