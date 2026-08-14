/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 18:55:10 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/14 21:51:11 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/all.hpp"

int main()
{
	std::cout << "=== INSTANCE CREATION (Basic constructor)===" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
	std::cout << "=== END OF CREATION ===\n" << std::endl;

	std::cout << "--- Type ---" << std::endl;
    std::cout << "type of j = " << j->getType() << " " << std::endl;
    std::cout << "type of i = " << i->getType() << " " << std::endl;
    std::cout << "type of meta = " << meta->getType() << " " << std::endl;
    
	std::cout << "\n--- Sounds ---" << std::endl;
	i->makeSound();
    j->makeSound();
    meta->makeSound();
    
	std::cout << "\n=== DELETE INSTANCE AFTER USING NEW ===" << std::endl;
	delete j;
    delete i;
    delete meta;

	std::cout << "=== BUILD INSTANCE (constructor with arg) ===" << std::endl;
	const Animal *newCat = new Cat("Maine Coon");
	std::cout << "Type of newCat -> " << newCat->getType() << std::endl;
	std::cout << "This cat say ";
	newCat->makeSound();
	delete newCat;

    // The same things but with a Wrong Cat
    std::cout << "\nPlaying with WrongAnimal and WrongCat\n";
    const WrongAnimal *metaWrong = new WrongAnimal();;
    const WrongAnimal *miaou = new WrongCat();

    std::cout << miaou->getType() << " " << std::endl;
    miaou->makeSound();

    delete miaou;
    delete metaWrong;
    return 0;
}