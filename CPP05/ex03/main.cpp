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
#include "classes/Intern/Intern.hpp"
#include <exception>

int main(void) {

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

  std::cout << GREEN << "\nIt's better if my intern create form for me !!"
  			<< RESET << std::endl;
  Intern	slave;
  AForm		*shrubForm = NULL;
  AForm		*robotForm = NULL;
  AForm		*presidentForm = NULL;
  try {
	  shrubForm = slave.makeForm("shrubbery form S345", "shrubbery");
	  robotForm = slave.makeForm("roboForm C3PO", "robotomy");
	  presidentForm = slave.makeForm("president form", "toto");
  } catch (const std::exception &e) {
  	std::cerr << RED << e.what() << RESET << std::endl;
  }

  delete form;
  delete bureaucrat;
  delete robotomyForm;
  delete presidentialForm;
  delete shrubForm;
  delete robotForm;
  delete presidentForm;
  return 0;
}
