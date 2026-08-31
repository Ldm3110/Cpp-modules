/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 10:03:00 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/31 10:57:29 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string name, int grade): _name(name) {
	if (grade < 0)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
	std::cout << "Bureaucrat " << _name << " created" << std::endl;
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
	this->_grade--;
}

void		Bureaucrat::decreaseGrade(void) {
	this->_grade++;
}

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
	os << bureaucrat.getName();
	return os;
}