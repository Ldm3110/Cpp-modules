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
#include "classes/Form/Shrubbery/Shrubbery.hpp"
#include <exception>


int main(void) {

  // std::cout << BLUE << "Try to create a bad Bureaucrat with grade to high and
  // catch the error" << RESET << std::endl;

  // try {
  // 	Bureaucrat("Mickeal", -10);
  // }
  // catch(const std::exception &e) {
  // 	std::cerr << e.what() << '\n';
  // }

  // std::cout << BLUE << "\nTry to create a bad Bureaucrat with grade to low
  // and catch the error" << RESET << std::endl;

  // try {
  // 	Bureaucrat("Mickeal", 160);
  // }
  // catch(const std::exception &e) {
  // 	std::cerr << e.what() << '\n';
  // }

  std::cout << BLUE << "\nTry to create a good Bureaucrat" << RESET
            << std::endl;

  Bureaucrat *test = NULL;
  try {
  	test = new Bureaucrat("Mickeal", 42);
  } catch (const std::exception &e) {
    std::cerr << e.what() << std::endl;
  }

  std::cout << GREEN << "\nWorking with forms" << RESET << std::endl;

  AForm *form = NULL;

  std::cout << BLUE << "\nTry to create a bad shrubbery form (target empty)" << RESET
            << std::endl;
  try {
    form = new ShrubberyCreationForm("");
    std::cout << *form << std::endl;
  } catch (const std::exception &e) {
    std::cerr << e.what() << std::endl;
  }

  std::cout << BLUE << "\nSame test whit good shrubbery form" << RESET
            << std::endl;
  try {
    form = new ShrubberyCreationForm("home");
    std::cout << *form << std::endl;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n' << std::endl;
  }

  std::cout << BLUE << "\nTry to execute the form (impossible because not signed)"
  			<< RESET << std::endl;
  try {
  	form->execute(*test);
  } catch (const std::exception &e) {
  	std::cerr << e.what() << std::endl;
  }

  std::cout << BLUE << "\nOkey now bureaucrat sign form and try to execute it"
  			<< RESET << std::endl;
  try {
  	test->signForm(*form);
   	std::cout << (form->isSigned() ? "SIGNED" : "NOT SIGNED") << std::endl;
   	form->execute(*test);
  } catch (const std::exception &e) {
  	std::cerr << e.what() << std::endl;
  }
  // form = new Form("Formulaire B727", false, 15, 5);
  // std::cout << *form << std::endl;

  // std::cout << BLUE << "\nBureaucrat try to work with form but his grade is
  // too low" << RESET << std::endl; test->signForm(*form);

  // std::cout << BLUE << "\nNow, create a Bureaucrat with good grade and try to
  // sign the same Form" << RESET << std::endl; Bureaucrat *otherB = NULL; try {
  // 	otherB = new Bureaucrat("John", 5);
  // }
  // catch(const std::exception &e) {
  // 	std::cerr << e.what() << '\n';
  // }
  // otherB->signForm(*form);
  //
  delete form;
  delete test;
  // delete otherB;
  return 0;
}
