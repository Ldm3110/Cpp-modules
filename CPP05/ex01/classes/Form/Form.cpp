/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 16:25:43 by lude-mat          #+#    #+#             */
/*   Updated: 2026/09/03 10:07:35 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "../Bureaucrat/Bureaucrat.hpp"

Form::Form(std::string name, bool is_signed, int requiredGradeSign, int requiredGradeExec):
	_name(name),
	_is_signed(is_signed) 
{
	if (requiredGradeSign < 1 || requiredGradeExec < 1)
		throw Form::GradeTooHighException();
	if (requiredGradeSign > 150 || requiredGradeExec > 150)
		throw Form::GradeTooLowException();
	_requiredGradeSign = requiredGradeSign;
	_requiredGradeExec = requiredGradeExec;
}

Form::Form(const Form &other) {
	*this = other;
}

Form	&Form::operator=(const Form &other) {
	if (this != &other) {
		this->_name = other._name;
		this->_is_signed = other._is_signed;
		this->_requiredGradeSign = other._requiredGradeSign;
		this->_requiredGradeExec = other._requiredGradeExec;
	}
	return *this;
}

Form::~Form() {}

std::string	Form::getName(void) const {
	return this->_name;
}

bool		Form::isSigned(void) const {
	return this->_is_signed;
}

int			Form::requiredGradeSign(void) const {
	return this->_requiredGradeSign;
}

int			Form::requiredGradeExec(void) const {
	return this->_requiredGradeExec;
}

void		Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->_requiredGradeSign) {
		throw Bureaucrat::GradeTooLowException();
	}
}

const char	*Form::GradeTooHighException::what() const throw() {
	return "[Form] Error : Grade too high";
}

const char	*Form::GradeTooLowException::what() const throw() {
	return "[Form] Error : Grade too low";
}

std::ostream	&operator<<(std::ostream &os, const Form &form) {
	os 
		<< form.getName() 
		<< ", form grade sign " 
		<< form.requiredGradeSign()
		<< ", form grade exec "
		<< form.requiredGradeExec();
	return os;
}