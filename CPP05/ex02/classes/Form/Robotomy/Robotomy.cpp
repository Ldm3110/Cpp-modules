#include "Robotomy.hpp"
#include "../../Bureaucrat/Bureaucrat.hpp"
#include <ostream>

RobotomyRequestForm::RobotomyRequestForm(const std::string target):
	AForm("Robotomy", 72, 45)
{
	if (target == "")
		throw AForm::BadArgumentException("target is empty");
	_target = target;
	std::cout << "Bzzzt Bzzzt Bzzzt " << _target << " has been robotomized 50% of the time" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): AForm(other) {
	*this = other;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
	if (this != &other) {
		AForm::operator=(other);
		this->_target = other._target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (this->isSigned()) {
		if (executor.getGrade() < this->requiredGradeExec())
			std::cout << "Form executed" << std::endl;
		else
			throw AForm::GradeTooHighException();
	} else {
		throw AForm::NotSignedException();
	}
}

std::ostream	&operator<<(std::ostream &os, const RobotomyRequestForm &rob) {
	os << rob.getName();
	return os;
}