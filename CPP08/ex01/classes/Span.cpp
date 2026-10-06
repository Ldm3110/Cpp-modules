#include "Span.hpp"
#include <algorithm>
#include <stdexcept>

Span::Span(unsigned int n): _maxSize(n) {}

Span::Span(const Span &other) {
	*this = other;
}

Span	&Span::operator=(const Span &other) {
	if (this != &other) {
		this->_maxSize = other._maxSize;
		for (std::size_t i = 0; i < other._maxSize; i++)
			this->_v.push_back(other._v[i]);
	}
	return *this;
}

Span::~Span() {}

const char	*Span::FullSpanException::what() const throw() {
	return "Impossible to add this number ! Span is full !!";
}

const char	*Span::LongestException::what() const throw() {
	return "Error when try to find longest Span";
}

const char	*Span::ShortestException::what() const throw() {
	return "Error when try to find shortest Span";
}

void	Span::addNumber(int number) {
	if (this->_v.size() == this->_maxSize)
		throw Span::FullSpanException();
	else 
		this->_v.push_back(number);
}
int Span::longestSpan() const {
    if (this->_v.size() < 2)
        throw std::logic_error("Not enough numbers to find a span");
    return *std::max_element(this->_v.begin(), this->_v.end())
         - *std::min_element(this->_v.begin(), this->_v.end());
}

int Span::shortestSpan() const {
    if (this->_v.size() < 2)
        throw std::logic_error("Not enough numbers to find a span");

    std::vector<int> sorted(this->_v);
    std::sort(sorted.begin(), sorted.end());

    int shortest = sorted[1] - sorted[0];
    for (size_t i = 2; i < sorted.size(); ++i)
        shortest = std::min(shortest, sorted[i] - sorted[i - 1]);
    return shortest;
}
