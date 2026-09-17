#include "classes/ScalarConverter.hpp"
#include <string>

# define RESET   "\033[0m"
# define RED     "\033[31m"

int	main(int argc, char **argv) {
	if (argc < 2) {
		std::cerr << RED << "Bad numbers of arguments"
			<< RESET << std::endl;
		return 1;
	}
	std::string param(argv[1]);
	if (param.empty()) {
		std::cerr << RED << "Argument cannot be empty"
			<< RESET << std::endl;
	}
	std::string repr = argv[1];
	ScalarConverter::convert(repr);
	return 0;
}
