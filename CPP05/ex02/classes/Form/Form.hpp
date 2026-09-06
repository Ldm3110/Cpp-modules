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

#include <exception>
#include <iostream>
#include <string>
#include "../Exceptions/Exceptions.hpp"

class Bureaucrat;

class AForm {
	private:
		std::string	_name;
		bool		_is_signed;
		int			_requiredGradeSign;
		int			_requiredGradeExec;

	public:
		AForm(std::string name, int requiredGradSign, int requiredGradeExec);
		AForm(const AForm &other);
		virtual ~AForm();

		AForm	&operator=(const AForm &other);

		std::string		getName(void) const;
		bool			isSigned(void) const;
		int				requiredGradeSign(void) const;
		int				requiredGradeExec(void) const;

		void			beSigned(const Bureaucrat &bureaucrat);

		virtual void	execute(Bureaucrat const & executor) const = 0;

		// Exception
		class	GradeTooHighException: public AGradeException::GradeTooHighException {
			public:
				virtual const char *what() const throw();
		};

		class	GradeTooLowException: public AGradeException::GradeTooLowException {
			public:
				virtual const char *what() const throw();
		};

		class	BadArgumentException: public std::exception {
			private:
				std::string	_argument;
				
			public:
				BadArgumentException(const std::string &typeArgSend);
				virtual ~BadArgumentException() throw();
				virtual const char	*what() const throw();
		};

		class	NotSignedException: public std::exception {
			public:
				virtual const char	*what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, const AForm &form);

#endif
