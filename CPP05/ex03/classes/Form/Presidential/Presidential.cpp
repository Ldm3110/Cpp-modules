#include "Presidential.hpp"
#include "../../Bureaucrat/Bureaucrat.hpp"
#include <ostream>
#include <string>

PresidentialPardonForm::PresidentialPardonForm(const std::string target):
	AForm("President Form", 25, 5)
{
	if (target == "")
		throw AForm::BadArgumentException("target is empty");
	_target = target;
	std::cout << _target << " has been pardonned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other): AForm(other) {
	*this = other;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
	if (this != &other) {
		AForm::operator=(other);
		this->_target = other._target;
	}
	return *this;
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (this->isSigned()) {
		if (executor.getGrade() < this->requiredGradeExec())
			std::cout << "Form executed" << std::endl;
		else
			throw AForm::GradeTooHighException();
	} else {
		throw AForm::NotSignedException();
	}
}

std::ostream	&operator<<(std::ostream &os, const PresidentialPardonForm &president) {
	os << president.getName();
	return os;
}
