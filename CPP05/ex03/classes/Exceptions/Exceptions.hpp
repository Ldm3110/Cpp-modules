/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exceptions.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 12:14:47 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/31 12:33:25 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTION_HPP
# define EXCEPTION_HPP

#include <exception>

class AGradeException {

	public:
		class	GradeTooHighException: public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class	GradeTooLowException: public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

#endif
