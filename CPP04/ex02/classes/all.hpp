/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 16:21:38 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/20 09:39:43 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALL_HPP
# define ALL_HPP

#include "Animal/Animal.hpp"
#include "Dog/Dog.hpp"
#include "Cat/Cat.hpp"
#include "Brain/Brain.hpp"
#include "wrong/WrongAnimal.hpp"
#include "wrong/WrongCat.hpp"

# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"

std::ostream &operator<<(std::ostream &os, const AAnimal &AAnimal);

#endif