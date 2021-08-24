#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

class MutantStack
{
	public:
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack& ref);
		MutantStack& operator = (const MutantStack& ref);
};

#endif
