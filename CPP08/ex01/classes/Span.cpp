#include "Span.hpp"

Span::Span(unsigned int n): _maxSize(n) {}

Span::Span(const Span &other) {
	*this = other;
}

Span	&Span::operator=(const Span &other) {
	if (this != &other) {
		this->_maxSize = other._maxSize;
		for (size_t i = 0; i < other._maxSize; i++)
			this->_v.push_back(other._v[i]);
	}
	return *this;
}

Span::~Span() {}

void	Span::addNumber(int number) {
	if (this->_v.size() == this->_maxSize)
		throw Span::FullSpanException();
	else 
		this->_v.push_back(number);
}
