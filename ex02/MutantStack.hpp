/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Loui :) <loflavel@students.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:39:56 by Loui :)           #+#    #+#             */
/*   Updated: 2023/02/07 12:40:01 by Loui :)          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP


#include <stack>
#include <iostream>
#include <list>

template <typename T>
class	MutantStack : public std::stack<T> {

	public:

		MutantStack() {};
		MutantStack(MutantStack const & obj) { *this = obj; };
		MutantStack & operator=(MutantStack const & obj) {
			std::stack<T>::operator=(obj);
			return (*this);
		}
		virtual ~MutantStack() {};

		typedef typename std::stack<T>::container_type::iterator			iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator	reverse_iterator;

		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }
		reverse_iterator rbegin() { return this->c.rbegin(); }
		reverse_iterator rend() { return this->c.rend(); }

};
#endif