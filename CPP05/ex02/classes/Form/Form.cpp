/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 16:25:43 by lude-mat          #+#    #+#             */
/*   Updated: 2026/09/03 10:07:35 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "../Bureaucrat/Bureaucrat.hpp"

AForm::AForm(std::string name, int requiredGradeSign, int requiredGradeExec):
	_name(name),
	_is_signed(false)
{
	if (requiredGradeSign < 1 || requiredGradeExec < 1)
		throw AForm::GradeTooHighException();
	if (requiredGradeSign > 150 || requiredGradeExec > 150)
		throw AForm::GradeTooLowException();
	_requiredGradeSign = requiredGradeSign;
	_requiredGradeExec = requiredGradeExec;
}

AForm::AForm(const AForm &other) {
	*this = other;
}

AForm	&AForm::operator=(const AForm &other) {
	if (this != &other) {
		this->_name = other._name;
		this->_is_signed = other._is_signed;
		this->_requiredGradeSign = other._requiredGradeSign;
		this->_requiredGradeExec = other._requiredGradeExec;
	}
	return *this;
}

AForm::~AForm() {}

std::string	AForm::getName(void) const {
	return this->_name;
}

bool		AForm::isSigned(void) const {
	return this->_is_signed;
}

int			AForm::requiredGradeSign(void) const {
	return this->_requiredGradeSign;
}

int			AForm::requiredGradeExec(void) const {
	return this->_requiredGradeExec;
}

void		AForm::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->_requiredGradeSign) {
		throw Bureaucrat::GradeTooLowException();
	}
	this->_is_signed = true;
}

const char	*AForm::GradeTooHighException::what() const throw() {
	return "[AForm] Error : Grade too high";
}

const char	*AForm::GradeTooLowException::what() const throw() {
	return "[AForm] Error : Grade too low";
}


// Special Exceptions

AForm::BadArgumentException::BadArgumentException(const std::string &typeArgSend): _argument("Bad arg = " + typeArgSend) {}

const char	*AForm::BadArgumentException::what() const throw() {
	return this->_argument.c_str();
}

AForm::BadArgumentException::~BadArgumentException() throw() {}

const char	*AForm::NotSignedException::what() const throw() {
	return "[AForm] This form is unsigned and cannot be executed";
}

std::ostream	&operator<<(std::ostream &os, const AForm &AForm) {
	os
		<< AForm.getName()
		<< ", AForm grade sign "
		<< AForm.requiredGradeSign()
		<< ", AForm grade exec "
		<< AForm.requiredGradeExec();
	return os;
}
