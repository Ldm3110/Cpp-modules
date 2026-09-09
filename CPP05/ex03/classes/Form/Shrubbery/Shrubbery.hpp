#ifndef SHRUBBERY_HPP
# define SHRUBBERY_HPP

#include <ostream>
#include <string>

#include "../Form.hpp"

class ShrubberyCreationForm: public AForm {
	private:
		std::string	_target;

	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		~ShrubberyCreationForm();

		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &other);

		void					execute(const Bureaucrat &executor) const;
};

std::ostream	&operator<<(std::ostream &os, const ShrubberyCreationForm &shrub);

#endif
