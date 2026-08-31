/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 09:58:10 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/31 10:57:39 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

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
		class	GradeTooHighException: public std::exception {
			public:
				virtual const char *what() const throw();	
		};
		
		class	GradeTooLowException: public std::exception {			
			public:
				virtual const char *what() const throw();	
		};

		// get-er
		std::string	getName(void) const;
		int			getGrade(void) const;

		void		increaseGrade(void);
		void		decreaseGrade(void);
		
};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif