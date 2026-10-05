#pragma once

#include <iostream>
#include <exception>
#include <cstdlib>

template<typename T>
class Array {
	private:
		T		*_data;
		size_t	_size;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array &other);
		~Array();

		Array	&operator=(const Array &other);
		T		&operator[](size_t n);
		const T	&operator[](size_t n) const;

		size_t	size(void) const;
		
		// manage exception
		class ArrayExceptionIndex: public std::exception {
			public:
				virtual const char	*what() const throw();
		};
};

template<typename T>
Array<T>::Array(): _data(NULL), _size(0) {}

template<typename T>
Array<T>::Array(unsigned int n): _size(n) {
	if (this->_size == 0)
		this->_data = NULL;
	else {
		this->_data = new T[n]();
	}
}

template<typename T>
Array<T>::Array(const Array &other) {
	this->_data = NULL;
	*this = other;
}

template<typename T>
Array<T>::~Array() {
	delete[] this->_data;
}

template<typename T>
Array<T>	&Array<T>::operator=(const Array &other) {
	if (this != &other) {
		delete[] this->_data;
		this->_size = other._size;
		if (this->_size == 0) {
			this->_data = NULL;
		} else {
			this->_data = new T[this->_size];
			for (size_t i = 0; i < this->_size; ++i) {
				this->_data[i] = other._data[i];
			}
		}
	}
	return *this;
}

template<typename T>
const char	*Array<T>::ArrayExceptionIndex::what() const throw() {
	return "Error : Invalid index for array\n";
}

template<typename T>
size_t	Array<T>::size(void) const {
	return this->_size;
}

template<typename T>
T	&Array<T>::operator[](size_t n) {
	if (n >= this->_size)
		throw Array::ArrayExceptionIndex();
	return this->_data[n];
}

template<typename T>
const T	&Array<T>::operator[](size_t n) const {	
	if (n >= this->_size)
		throw Array::ArrayExceptionIndex();
	return this->_data[n];
}

