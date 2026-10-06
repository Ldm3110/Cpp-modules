#include "classes/Span.hpp"
#include <exception>
#include <iostream>

# define RESET   "\033[0m"
# define BLUE    "\033[34m"
# define GREEN   "\033[32m"
# define RED     "\033[31m"

int main (int argc, char *argv[]) {
	(void) argc;
	(void) argv;
	Span	*sp = new Span(3);
	sp->addNumber(1);
	sp->addNumber(2);
	sp->addNumber(3);
	std::cout << BLUE << "Try to add a 4th number (the maxSize is 3)" 
		<< RESET << std::endl;
	try {
		sp->addNumber(42);
	} catch (std::exception &e) {
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	std::cout << BLUE << "\nTry the same with a larger span (maxSize = 5)" 
			<< RESET << std::endl;
	Span	*otherSp = new Span(5);
	otherSp->addNumber(1);
	otherSp->addNumber(2);
	otherSp->addNumber(3);
	otherSp->addNumber(4);
	try {
		otherSp->addNumber(42);
		std::cout << GREEN << "Number 42 added in Span" << RESET << std::endl;
	} catch (std::exception &e) {
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	std::cout << BLUE << "\nCreates a new Span and search shortest and longest span"
			<< RESET << std::endl;
	Span	*thirdSp = new Span(4);
	thirdSp->addNumber(6);
	thirdSp->addNumber(1);
	thirdSp->addNumber(14);
	thirdSp->addNumber(8);
	try {
		int longest = thirdSp->longestSpan();
		int shortest = thirdSp->shortestSpan();
		std::cout << GREEN << "longest span = " << longest
			<< " --- shortest span = " << shortest << RESET << std::endl;
	} catch (std::exception &e) {
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	delete sp;
	delete otherSp;
	delete thirdSp;
	return 0;
}
