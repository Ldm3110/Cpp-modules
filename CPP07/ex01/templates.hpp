#pragma once

#include <iostream>

template<typename T>
static void	displayElem(const T elem) {
	std::cout << elem << " ";
}

template<typename T>
static void incr(T elem) {
	std::cout << ++elem << " ";
}

template<typename T, typename Telem>
void	iter(T *arrPtr, const size_t lenArr, void(*fPtr)(Telem)) {
	for (size_t i = 0; i < lenArr; i++) {
		fPtr(arrPtr[i]);
	}
}
