/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 17:03:05 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/20 11:48:55 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "../Animal/Animal.hpp"
# include "../Brain/Brain.hpp"

# define RESET	"\033[0m"
# define BLUE	"\033[34m"

class Dog : public Animal {

	private:
		Brain	*dogBrain;

    public:
		Dog();
		Dog(std::string type);
		Dog(const Dog &other);
		~Dog();

		Dog	&operator=(const Dog &other);

		void		makeSound() const;
		Brain		&getBrain(void) const;
		std::string	giveMeAnIdea(int index) const;
};

#endif