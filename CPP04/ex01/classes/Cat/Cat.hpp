/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 11:57:39 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/20 11:51:32 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "../Animal/Animal.hpp"
# include "../Brain/Brain.hpp"

# define RED     "\033[31m"
# define RESET   "\033[0m"

class Cat : public Animal {

	private:
		Brain *catBrain;

    public:
		Cat();
		Cat(std::string type);
		Cat(const Cat &other);
		~Cat();

		Cat &operator=(const Cat &other);

		void		makeSound() const;
		Brain		&getBrain(void) const;
		std::string	giveMeAnIdea(int index) const;
};

#endif