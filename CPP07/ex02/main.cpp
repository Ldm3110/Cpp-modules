#include "classes/Array.hpp"

#include <iostream>

# define RESET   "\033[0m"
# define BLUE    "\033[34m"
# define GREEN   "\033[32m"
# define RED     "\033[31m"

int	main(int argc, char **argv) {
	(void) argc;
	(void) argv;
	std::cout << GREEN << "====== Starting tests ======\n" << RESET << std::endl;
	std::cout << BLUE << "Creates an empty template class Array" << RESET << std::endl;
	Array<int>	emptyArr;
	try {
		std::cout << "try to find elem at index 1 (not possible because empty array)" << std::endl;
		int	elem1 = emptyArr[1];
		std::cout << elem1 << std::endl;
	} catch (std::exception &e) {
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	std::cout << BLUE << "Creates an empty template class Array" << RESET << std::endl;
	Array<int>	goodArr(5);
	try {
		std::cout << "and now, try to find elem at index 1 (existing)" << std::endl;
		int	elem2 = goodArr[1];
		std::cout << elem2 << "\n" << std::endl;
	} catch (std::exception &e) {
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	std::cout << BLUE << "Copy array and display value at index 1" << RESET << std::endl;
	const Array<int> otherArr = goodArr;
	std::cout << otherArr[1] << std::endl;
	std::cout << GREEN << "\n====== Ending tests ======" << RESET << std::endl;
	return 0;
}
