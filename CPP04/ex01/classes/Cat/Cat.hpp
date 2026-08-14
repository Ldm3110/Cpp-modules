/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 11:57:39 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/14 16:51:07 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "../Animal/Animal.hpp"

class Cat : public Animal {
    public:
    Cat();
	Cat(std::string type);
	Cat(const Cat &other);
    ~Cat();

	Cat &operator=(const Cat &other);

    void makeSound() const;
};

#endif