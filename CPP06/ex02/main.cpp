#include "classes/all.hpp"

#include <cstdlib>
#include <iostream>

Base	*generate(void) {
	srand(time(NULL));
	int	random = 1 + rand() % 3;
	std::cout << random << std::endl;
	switch (random) {
	case 1:
		return new A();
	case 2:
		return new B();
	case 3:
		return new C();
	default:
		std::cout << "There's an error my dear !!" << std::endl;
		break;
	};
	return NULL;
}

static void	identify(Base *p) {
	if (dynamic_cast<A*>(p))
		std::cout << "It's A class (pointer)" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "It's B class (pointer)" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "It's C class (pointer)" << std::endl;
}

static void	identify(Base &p) {
	try {
		A &a = dynamic_cast<A&>(p);
		std::cout << "It's A class (reference)" << std::endl;
		(void) a;
		return ;
	} catch (...) {}
	try {
		B &b = dynamic_cast<B&>(p);
		std::cout << "It's B class (reference)" << std::endl;
		(void) b;
		return ;
	} catch (...) {}
	try {
		C &c = dynamic_cast<C&>(p);
		std::cout << "It's C class (reference)" << std::endl;
		(void) c;
		return ;
	} catch (...) {}
	std::cerr << "Bad cast" << std::endl;
}

int	main(void) {
	Base *inst = generate();
	std::cout << inst << std::endl;
	identify(inst);
	identify(*inst);
	delete inst;
	return 0;
}
