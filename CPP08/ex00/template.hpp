#pragma once

# include <exception>
# include <iostream>
# include <algorithm>

class myException: public std::exception {
	public:
		virtual const char	*what() const throw() {
			return "Sorry ! value not find in container";
		}
};

template<typename T>
void	easyfind(T cont, int toFind) {
	typename T::iterator iter = std::find(cont.begin(), cont.end(), toFind);
	if (iter == cont.end()) {
		throw myException();
	} else {
		std::cout << "Value find at index " << std::distance(cont.begin(), iter) << std::endl;
	}
}
