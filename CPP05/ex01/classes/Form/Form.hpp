/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 16:18:47 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/31 17:22:01 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "../Exceptions/Exceptions.hpp"

class Bureaucrat;

class Form {
	private:
		std::string	_name;
		bool		_is_signed;
		int			_requiredGradeSign;
		int			_requiredGradeExec;

	public:
		Form(std::string name, bool is_signed, int requiredGradSign, int requiredGradeExec);
		Form(const Form &other);
		~Form();

		Form	&operator=(const Form &other);

		//get-er
		std::string	getName(void) const;
		bool		isSigned(void) const;
		int			requiredGradeSign(void) const;
		int			requiredGradeExec(void) const;

		void		beSigned(const Bureaucrat &bureaucrat);

		// Exception
		class	GradeTooHighException: public AGradeException::GradeTooHighException {
			public:
				virtual const char *what() const throw();	
		};
		
		class	GradeTooLowException: public AGradeException::GradeTooLowException {
			public:
				virtual const char *what() const throw();	
		};
		
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif