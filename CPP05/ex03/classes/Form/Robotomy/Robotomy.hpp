#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include "../Form.hpp"
#include <ostream>
#include <string>

class RobotomyRequestForm: public AForm {
	private:
		std::string	_target;

	public:
		RobotomyRequestForm(const std::string _target);
		RobotomyRequestForm(const RobotomyRequestForm &other);
		~RobotomyRequestForm();

		RobotomyRequestForm	&operator=(const RobotomyRequestForm &other);

		void	execute(const Bureaucrat &executor) const;
};

std::ostream	&operator<<(std::ostream &os, const RobotomyRequestForm &rob);

#endif
