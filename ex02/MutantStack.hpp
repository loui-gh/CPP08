#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <vector>
#include <list>
#include <iostream>
#include <iterator>
#include <cstddef>

template <typename T, class Ct = std::deque<T> >
class MutantStack : public std::stack<T, Ct> {
	public:
		MutantStack() : std::stack<T, Ct>() { }
		virtual ~MutantStack() { }
		MutantStack(MutantStack const &target) : std::stack<T, Ct>() {
			*this = target;
		}
		MutantStack		&operator=(MutantStack const &target) {
			this->c = target->c;
			return *this;
		}

		// typedef typename std::stack<T, Ct>::container_type::iterator iterator;
		//// Also, this can work :
		typedef typename MutantStack::container_type::iterator iterator;

		iterator	begin() {
			return this->c.begin();
		}
		iterator	end() {
			return this->c.end();
		}
};

#endif