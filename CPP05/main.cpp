/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 10:37:40 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/31 11:45:49 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/Bureaucrat/Bureaucrat.hpp"

int	main(void) {

	std::cout << "Try to create a bad Bureaucrat with grade to high and catch the error" << std::endl;

	try
	{
		Bureaucrat("Mickeal", -10);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "Try to create a bad Bureaucrat with grade to low and catch the error" << std::endl;

	try
	{
		Bureaucrat("Mickeal", 160);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "Try to create a good Bureaucrat" << std::endl;

	Bureaucrat *test = NULL;
	try
	{
		test = new Bureaucrat("Mickeal", 42);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "grade before increase = " << test->getGrade() << std::endl; 
	test->increaseGrade();
	std::cout << "grade after increase = " << test->getGrade() << std::endl; 

	std::cout << "grade before decrease = " << test->getGrade() << std::endl; 
	test->decreaseGrade();
	std::cout << "grade after decrease = " << test->getGrade() << std::endl; 
}