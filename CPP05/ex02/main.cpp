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
#include "classes/Form/Presidential/Presidential.hpp"
#include "classes/Form/Shrubbery/Shrubbery.hpp"
#include "classes/Form/Robotomy/Robotomy.hpp"
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

  Bureaucrat *bureaucrat = NULL;
  try {
  	bureaucrat = new Bureaucrat("Mickeal", 42);
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
  	form->execute(*bureaucrat);
  } catch (const std::exception &e) {
  	std::cerr << e.what() << std::endl;
  }

  std::cout << BLUE << "\nOkey now bureaucrat sign form and try to execute it"
  			<< RESET << std::endl;
  try {
  	bureaucrat->signForm(*form);
   	std::cout << (form->isSigned() ? "SIGNED" : "NOT SIGNED") << std::endl;
   	form->execute(*bureaucrat);
  } catch (const std::exception &e) {
  	std::cerr << e.what() << std::endl;
  }

  std::cout << GREEN << "Same tests with Robotomy and Presidential"
  			<< RESET << std::endl;

  AForm *robotomyForm = NULL;
  AForm *presidentialForm = NULL;
  try {
  	robotomyForm = new RobotomyRequestForm("robotomy");
   	presidentialForm = new PresidentialPardonForm("president");
    std::cout << *robotomyForm << " and " << *presidentialForm << std::endl;
  } catch (const std::exception &e) {
  	std::cerr << e.what() << std::endl;
  }

  std::cout << BLUE << "\nTry to execute form"
  			<< RESET << std::endl;
  try {
	  bureaucrat->executeForm(*robotomyForm);
	  bureaucrat->executeForm(*presidentialForm);
  } catch (const std::exception &e) {
  	std::cerr << e.what() << std::endl;
  }
  delete form;
  delete bureaucrat;
  delete robotomyForm;
  delete presidentialForm;
  return 0;
}
