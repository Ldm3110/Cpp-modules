#include "Shrubbery.hpp"
#include "../../Bureaucrat/Bureaucrat.hpp"
#include <cstdlib>
#include <ostream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	AForm("Shrubbery Form", 145, 137)
{
	if (target == "")
		throw AForm::BadArgumentException("target is empty");

	_target = target;
	std::string targetFull = this->_target + "_shrubbery";
	std::string command = "tree > " + targetFull;

	int	ret = std::system(command.c_str());
    if (ret != 0) {
        std::cerr << "Warning: tree command failed" << std::endl;
    }
	std::cout << "[ShrubberyCreationForm] " << AForm::getName() << " created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other): AForm(other) {
	*this = other;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
	if (this != &other) {
		AForm::operator=(other);
		this->_target = other._target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (this->isSigned()) {
		if (executor.getGrade() < this->requiredGradeExec())
			std::cout << "Form executed" << std::endl;
		else
			throw AForm::GradeTooHighException();
	} else {
		throw AForm::NotSignedException();
	}
}

std::ostream	&operator<<(std::ostream &os, const ShrubberyCreationForm &shrub) {
	os << shrub.getName();
	return os;
}
