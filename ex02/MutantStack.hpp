/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Loui :) <loflavel@students.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:39:56 by Loui :)           #+#    #+#             */
/*   Updated: 2023/02/08 15:54:31 by Loui :)          ###   ########.fr       */
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
		MutantStack(MutantStack const & obj) : std::stack<T>(obj) { //must inherit from std::stack to make use of stack Copy Constructor
			
			std::cout << "copy constructor called\n";
			*this = obj;
		};
		
		MutantStack & operator=(MutantStack const & obj) {
			std::cout << "assignment constructor called\n";

			this->c = obj.c;//c vererbt von std::stack will nicht ganze obj, sondern nur container kopieren
			
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