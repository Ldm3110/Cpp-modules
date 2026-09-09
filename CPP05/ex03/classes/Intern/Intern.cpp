#include "Intern.hpp"

#include "../Form/Shrubbery/Shrubbery.hpp"
#include "../Form/Robotomy/Robotomy.hpp"
#include "../Form/Presidential/Presidential.hpp"

# define RED     "\033[31m"
# define RESET   "\033[0m"

Intern::Intern() {}

Intern::Intern(const Intern &other) {
	*this = other;
}

Intern &Intern::operator=(const Intern &other) {
	(void) other;
	return *this;
}

Intern::~Intern() {}

AForm	*createShrubberyForm(const std::string &name) {
	return new ShrubberyCreationForm(name);
}

AForm	*createRobotomyForm(const std::string &name) {
	return new RobotomyRequestForm(name);
}

AForm	*createPresidentForm(const std::string &name) {
	return new PresidentialPardonForm(name);
}

void	initDictFormHandler(t_dict_form *formHandler) {
	formHandler[0].specifier = "shrubbery";
	formHandler[0].handler = createShrubberyForm;

	formHandler[1].specifier = "robotomy";
	formHandler[1].handler = createRobotomyForm;

	formHandler[2].specifier = "president";
	formHandler[2].handler = createPresidentForm;

	formHandler[3].specifier = "NULL";
	formHandler[3].handler = NULL;
}

AForm	*Intern::makeForm(const std::string &name, const std::string &target) {
	AForm 		*form = NULL;
	t_dict_form	formHandler[4];
	formCreator	formCreator;
	int			i = 0;

	initDictFormHandler(formHandler);
	while (formHandler[i].specifier != "NULL") {
		if (formHandler[i].specifier == target) {
			formCreator = formHandler[i].handler;
			form = formCreator(name);
			return form;
		}
		i++;
	}
	std::cout << RED << "Mmmmh sorry boss ... this form doesn't exist ...."
		<< RESET << std::endl;
	return form;
}
