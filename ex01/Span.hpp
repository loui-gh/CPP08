/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Loui :) <loflavel@students.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:39:47 by Loui :)           #+#    #+#             */
/*   Updated: 2023/02/07 12:39:50 by Loui :)          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <exception>

class Span {

	public:

		Span();
		Span(unsigned int N);
		Span(Span const & input);
		Span const & operator=(Span const & input);
		~Span(void);

		void	addNumber(int n);
		int		shortestSpan();
		int		longestSpan();

		class	NotEnoughElementsException : public std::exception {
			
			public://nested class cannot access private members of enclosing class
				virtual const char *what() const throw() {
					return("Error: not enough elements to make comparison\n");
				}
		};
		class	MaxElementsReachedException : public std::exception {
			
			public://nested class cannot access private members of enclosing class
				virtual const char *what() const throw() {
					return("Error: you cannot add any more elements\n");
				}
		};


	private:

		unsigned int	_maxN;
		std::vector<int> _g1;
};

#endif