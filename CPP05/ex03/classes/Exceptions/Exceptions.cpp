/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exceptions.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-mat <lude-mat@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 12:29:28 by lude-mat          #+#    #+#             */
/*   Updated: 2026/08/31 12:34:19 by lude-mat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Exceptions.hpp"

const char	*AGradeException::GradeTooHighException::what() const throw() {
	return "Default comportement";
}

const char	*AGradeException::GradeTooLowException::what() const throw() {
	return "Default comportement";
}
