#include <exception>
#include <vector>
#include "template.hpp"

# define RESET   "\033[0m"
# define BLUE    "\033[34m"
# define GREEN   "\033[32m"
# define RED     "\033[31m"

int	main(void) {
	std::vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(5);
	v.push_back(7);
	v.push_back(9);

	std::cout << GREEN << "===== Begin tests =====\n" << RESET << std::endl;
	std::cout << BLUE << "1. Vector\n" << RESET << std::endl;
	std::cout << BLUE << "value not in vector" << RESET << std::endl;
	try {
		easyfind(v, 0);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << BLUE << "\nvalue in vector" << RESET << std::endl;
	try {
		easyfind(v, 7);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << BLUE << "\nconst vector" << RESET << std::endl;
	const std::vector<int> constV(v);
	try {
		easyfind(v, 1);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << BLUE << "\n2. List\n" << RESET << std::endl;
	std::cout << GREEN << "\n===== Begin tests =====" << RESET << std::endl;
	return 0;
}
