/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 09:35:04 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/20 11:54:54 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/all.hpp"

int	main(void) {

	std::cout << GREEN << "Create animal Array and delete each instance\n" << RESET << std::endl;
	Animal	*animalArray[10];

	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0)
			animalArray[i] = new Cat();
		else
			animalArray[i] = new Dog();
	}
	std::cout << "\n";
	for (int i = 0; i < 10; i++)
		delete animalArray[i];

	std::cout << GREEN << "\n=== Work with polymorphism and abstract method ===\n" << RESET << std::endl;

	const Animal	*generic = new Animal();
	const Cat		*cat = new Cat();
	const Dog		*dog = new Dog();

	std::cout << "\n";
	generic->makeSound();
	std::cout << generic->giveMeAnIdea(32) << std::endl;
	std::cout << GREEN << "--- Same work with children ---" << RESET << std::endl;
	cat->makeSound();
	std::cout << YELLOW << cat->giveMeAnIdea(5) << RESET << std::endl;
	dog->makeSound();
	std::cout << YELLOW << dog->getBrain().giveMeAnIdea(57) << RESET << std::endl;
	std::cout << "\n";
	delete cat;
	delete dog;

	return 0;
}