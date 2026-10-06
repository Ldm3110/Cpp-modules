#pragma once

#include <vector>
#include <exception>

class Span {
	private:
		std::vector<int>	_v;
		unsigned int		_maxSize;

	public:
		Span(unsigned int n);
		Span(const Span &other);
		~Span();

		Span	&operator=(const Span &other);

		void	addNumber(int number);
		// int		shortestSpan();
		// int		longestSpan();

		class FullSpanException: std::exception {
			public:
				const char	*what() const throw();
		};
};
