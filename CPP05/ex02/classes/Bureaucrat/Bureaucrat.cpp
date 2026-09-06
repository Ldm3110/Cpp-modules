/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 10:03:00 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/31 17:06:08 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "../Form/Form.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
	std::cout << *this << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {
	*this = other;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other) {
	if (this != &other) {
		this->_name = other._name;
		this->_grade = other._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat() {}

// Exceptions
const char	*Bureaucrat::GradeTooHighException::what() const throw() {
	return "Error : Grade too high";
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {
	return "Error : Grade too low";
}

std::string	Bureaucrat::getName(void) const {
	return this->_name;
}

int			Bureaucrat::getGrade(void) const {
	return this->_grade;
}

void		Bureaucrat::increaseGrade(void) {
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void		Bureaucrat::decreaseGrade(void) {
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void		Bureaucrat::signForm(AForm &form) {
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr
			<< this->getName()
			<< " couldn't sign "
			<< form.getName()
			<< " because "
			<< e.what()
			<< '\n';
	}
}

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return os;
}
