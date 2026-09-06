#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

#include "../Form.hpp"
#include <ostream>
#include <string>

class PresidentialPardonForm: public AForm {
	private:
		std::string	_target;

	public:
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &other);
		~PresidentialPardonForm();

		PresidentialPardonForm	&operator=(const PresidentialPardonForm &other);

		void					execute(const Bureaucrat &executor) const;
};

std::ostream	&operator<<(std::ostream &os, const PresidentialPardonForm &president);

# endif