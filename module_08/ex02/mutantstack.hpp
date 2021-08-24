#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack& ref);
		MutantStack& operator = (const MutantStack& ref);

};

#endif
