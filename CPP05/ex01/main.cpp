/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 10:37:40 by lude-mat          #+#    #+#             */
/*   Updated: 2026/09/01 13:43:10 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/Bureaucrat/Bureaucrat.hpp"
#include "classes/Form/Form.hpp"

int	main(void) {

	// std::cout << BLUE << "Try to create a bad Bureaucrat with grade to high and catch the error" << RESET << std::endl;

	// try {
	// 	Bureaucrat("Mickeal", -10);
	// }
	// catch(const std::exception &e) {
	// 	std::cerr << e.what() << '\n';
	// }
	
	// std::cout << BLUE << "\nTry to create a bad Bureaucrat with grade to low and catch the error" << RESET << std::endl;

	// try {
	// 	Bureaucrat("Mickeal", 160);
	// }
	// catch(const std::exception &e) {
	// 	std::cerr << e.what() << '\n';
	// }

	std::cout << BLUE << "\nTry to create a good Bureaucrat" << RESET << std::endl;

	Bureaucrat *test = NULL;
	try {
		test = new Bureaucrat("Mickeal", 42);
	}
	catch(const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	// std::cout << "grade before increase = " << test->getGrade() << std::endl; 
	// test->increaseGrade();
	// std::cout << "grade after increase = " << test->getGrade() << std::endl; 

	// std::cout << "grade before decrease = " << test->getGrade() << std::endl; 
	// test->decreaseGrade();
	// std::cout << "grade after decrease = " << test->getGrade() << std::endl;
	// delete test;
	
	// std::cout << BLUE << "\nTry to create a Bureaucrat with 1 of grade and increase it (from 1 to 0)" << RESET << std::endl;
	// try {
	// 	Bureaucrat otherTest("Titouan", 1);
	// 	otherTest.increaseGrade();
	// }
	// catch(const std::exception &e) {
	// 	std::cerr << e.what() << std::endl;
	// }
	
	// std::cout << BLUE << "\nSame like before whit grade 150 and decrease it (from 150 to 151)" << RESET << std::endl;
	// try {
	// 	Bureaucrat otherTest("Me", 150);
	// 	otherTest.decreaseGrade();
	// }
	// catch(const std::exception &e) {
	// 	std::cerr << e.what() << std::endl;
	// }

	std::cout << GREEN << "\nWorking with forms" << RESET << std::endl;

	Form *form = NULL;

	std::cout << BLUE << "\nTry to create a bad form (incoherent grade)" << RESET << std::endl;
	try {
		form = new Form("Formulaire B727", false, 15, 0); // not good because requiredGradeExec < 1
		std::cout << form << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << std::endl;
	}
	form = new Form("Formulaire B727", false, 15, 5);
	std::cout << *form << std::endl;

	std::cout << BLUE << "\nBureaucrat try to work with form but his grade is too low" << RESET << std::endl;
	test->signForm(*form);

	std::cout << BLUE << "\nNow, create a Bureaucrat with good grade and try to sign the same Form" << RESET << std::endl;
	Bureaucrat *otherB = NULL;
	try {
		otherB = new Bureaucrat("John", 5);
	}
	catch(const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	otherB->signForm(*form);
	// 
	delete form;
	delete test;
	delete otherB;
	return 0;	
}