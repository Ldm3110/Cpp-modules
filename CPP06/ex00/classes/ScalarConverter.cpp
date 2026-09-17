#include "ScalarConverter.hpp"

#include <cctype>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <ios>
#include <limits>
#include <string>

static void	displayInt(double n) {
	if (n < std::numeric_limits<int>::min() || n > std::numeric_limits<int>::max())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << n << std::endl;
}

static void	displayFloat(double n) {
	if (n < -std::numeric_limits<float>::max() || n > std::numeric_limits<float>::max())
		std::cout << "float: impossible" << std::endl;
	else
		std::cout
			<< std::fixed << std::setprecision(1)
			<< "float: " << n << "f" << std::endl;
}

static void	displayDouble(double n) {
	if (n < -std::numeric_limits<double>::max() || n > std::numeric_limits<double>::max())
		std::cout << "double: impossible" << std::endl;
	else
		std::cout
			<< std::fixed << std::setprecision(1)
			<< "double: " << n << std::endl;
}

static void	nbConverter(std::string &repr, bool charRequired) {
	double	d = static_cast<double>(std::strtod(repr.c_str(), NULL));
	std::cout << "double = " << d << std::endl;
	if (charRequired) {
		char	c = static_cast<char>(static_cast<int>(d));
		std::cout << "char: ";
		if (std::isnan(d) || std::isinf(d)) {
			std::cout << "impossible" << std::endl;
		} else if (!std::isprint(static_cast<unsigned char>(d))) {
			std::cout << "not displayable" << std::endl;
		} else {
			std::cout << "'" << c << "'" << std::endl;
		}
	}
	displayInt(d);
	displayFloat(d);
	displayDouble(d);
}

void	ScalarConverter::convert(std::string &repr) {
	if (repr.length() == 1 && std::isprint(repr[0])) {
		std::cout << "char: " << "'" << repr << "'" << std::endl;
		nbConverter(repr, false);
	}
	else
		nbConverter(repr, true);
}
