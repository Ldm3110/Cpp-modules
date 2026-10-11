#include "classes/BitcoinExchange.hpp"
#include <iostream>

#include <string>
#include <cstdlib>

int main (int argc, char *argv[]) {
	if (argc < 2) {
		std::cerr << "Bad numbers of arguments" << std::endl;
		return 1;
	}
	try {
			BitcoinExchange	btc;
			btc.initData("data.csv");
			std::cout << "data initialized" << std::endl;
			btc.processLine(argv[1]);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
