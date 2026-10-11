#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <stack>

template<typename T>
class MutantStack: public std::stack<T> {
	public:
		MutantStack();
		MutantStack(const MutantStack &other);
		~MutantStack();

		MutantStack<T>	&operator=(const MutantStack &other);

		//define a specific type iterator from std::deque in std::stack
		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator	begin();
		iterator	end();
};

template<typename T>
MutantStack<T>::MutantStack() {}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &other) {
	*this = other;
}

template<typename T>
MutantStack<T>::~MutantStack() {}

template<typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack &other) {
	if (this != &other)
		std::stack<T>::operator=(other);
	return *this;
}

// Here, typename before return type because MutantStack can't know the final type of T
template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin() {
	return this->c.begin();	
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end() {
	return this->c.end();
}

#endif
