#include <iostream>
#include <list>

#include "classes/MutantStack.hpp"

int main (int argc, char *argv[]) {
	(void) argc;
	(void) argv;

	// Test my MutantStack
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout <<"top = " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "size = " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << "\n" << std::endl;
	// Same with std::list
	{
		std::list<int> lst;
		lst.push_front(5);
		lst.push_front(17);
		std::cout << "front = " << lst.front() << std::endl;
		lst.remove(lst.front());
		std::cout << "size = " << lst.size() << std::endl;
		lst.push_back(3);
		lst.push_back(5);
		lst.push_back(737);
		lst.push_back(0);
		for (std::list<int>::iterator it = lst.begin(); it != lst.end(); it++)
			std::cout << *it << std::endl;
	}
	return 0;
}
