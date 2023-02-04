#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <vector>
#include <iostream>
#include <algorithm>

class	NotFound : public std::exception {
			
	public://nested class cannot access private members of enclosing class
		virtual const char *what() const throw() {
			return("number not found\n");
		}
};

template <typename T>
typename T::iterator easyfind(T &t, int value)
{
	typename T::iterator res = std::find(t.begin(), t.end(), value);
	if (res == t.end())
		throw NotFound();
	return res;
}

#endif