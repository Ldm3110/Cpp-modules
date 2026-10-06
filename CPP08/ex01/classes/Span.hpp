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

		// Exceptions
		class FullSpanException: public std::exception {
			public:
				const char	*what() const throw();
		};

		class ShortestException: std::exception {
			public:
				const char	*what() const throw();
		};

		class LongestException: std::exception {
			public:
				const char	*what() const throw();
		};

		// members functions 
		void	addNumber(int number);
		int		shortestSpan(void) const ;
		int		longestSpan(void) const;
};
