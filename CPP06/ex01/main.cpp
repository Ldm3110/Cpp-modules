#include <iostream>
#include <sys/types.h>

#include "classes/Serializer.hpp"

int	main(void) {
	Data	dataStruct = {42, 'a', NULL};

	std::cout << "data structure before serialization : "
		<< "int value = " << dataStruct.n << "\n"
		<< "char value = " << dataStruct.c << "\n"
		<< "ptr value = " << &dataStruct.ptr
		<< std::endl;
	uintptr_t res = Serializer::serialize(&dataStruct);
	std::cout << "after serialization, res == " << res << std::endl;
	Data	*afterDes = Serializer::deserialize(res);
	std::cout << "data structure after serialization : "
		<< "int value = " << afterDes->n << "\n"
		<< "char value = " << afterDes->c << "\n"
		<< "ptr value = " << &afterDes->ptr
		<< std::endl;
	return 0;
}
