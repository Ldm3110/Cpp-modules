#ifndef INTERN_HPP
# define INTERN_HPP

#include "../Form/Form.hpp"

typedef AForm *(*formCreator)(const std::string&);

typedef struct s_dict_form {
	std::string specifier;
	formCreator	handler;
} 				t_dict_form;

class Intern {

	public:
		Intern();
		Intern(const Intern&);
		Intern &operator=(const Intern&);
		~Intern();

		AForm *makeForm(const std::string&, const std::string&);
	
};

#endif