#include "templates.hpp"
#include <cstddef>

int	main(void) {
	int	intA[5] = {0, -1, 2, -3, 4};
	::iter(intA, (size_t)(sizeof(intA) / sizeof(intA[0])), displayElem<const int>);
	std::cout << std::endl;
	const char cArr[5] = {'M', 'A', 'N', 'O', 'U'};
	::iter(cArr, (size_t)(sizeof(cArr) / sizeof((cArr[0]))), displayElem<const char>);
	std::cout << std::endl;
	::iter(intA, (size_t)(sizeof(intA) / sizeof(intA[0])), incr<int>);
	std::cout << std::endl;
	::iter(cArr, (size_t)(sizeof(cArr) / sizeof((cArr[0]))), incr<char>);
	return 0;
}
