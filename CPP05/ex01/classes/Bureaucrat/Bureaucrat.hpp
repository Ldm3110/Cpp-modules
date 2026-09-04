/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 09:58:10 by lude-mat          #+#    #+#             */
/*   Updated: 2026/09/01 11:30:24 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "../Exceptions/Exceptions.hpp"

# define RESET   "\033[0m"
# define BLUE    "\033[34m"
# define GREEN   "\033[32m"

class Form;

class Bureaucrat {
	private:
		std::string	_name;
		int			_grade;

	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();

		Bureaucrat	&operator=(const Bureaucrat &other);

		//exceptions
		class	GradeTooHighException: public AGradeException::GradeTooHighException {
			public:
				virtual const char *what() const throw();	
		};
		
		class	GradeTooLowException: public AGradeException::GradeTooLowException {			
			public:
				virtual const char *what() const throw();	
		};
		
		// get-er
		std::string	getName(void) const;
		int			getGrade(void) const;

		void		increaseGrade(void);
		void		decreaseGrade(void);

		void		signForm(Form &form);
		
};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif