/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Loui :) <loflavel@students.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:39:41 by Loui :)           #+#    #+#             */
/*   Updated: 2023/02/07 12:39:44 by Loui :)          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _maxN(0) {

}

Span::Span(unsigned int N) {

	
	this->_maxN = N;
	//this->_g1.reserve(N);//preallocates memory for N elements. NOTE, this does not limit size!!
}

Span::Span(Span const & input) {

	*this = input;
}

Span const & Span::operator=(Span const & input) {

	this->~Span();
	new (this) Span(input);
	return (*this);
}

Span::~Span(void) {

	return ;
}

void	Span::addNumber(int n) {

	if (this->_g1.size() >= this->_maxN)
		throw MaxElementsReachedException();
	this->_g1.push_back(n);
}

int	Span::longestSpan() {

	if (this->_g1.size() < 2)
		throw NotEnoughElementsException();

	int min_value = std::abs(*(std::min_element(this->_g1.begin(), this->_g1.end())));
	int	max_value = std::abs(*(std::max_element(this->_g1.begin(), this->_g1.end())));

	return (max_value - min_value);
}

int		Span::shortestSpan() {

	if (this->_g1.size() < 2)
		throw NotEnoughElementsException();

	std::sort(this->_g1.begin(), this->_g1.end());
	int shortest_span = std::abs(this->_g1[1] - this->_g1[0]);
	return shortest_span;
}
