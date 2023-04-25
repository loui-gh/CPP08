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

Span::Span() {
}

Span::Span(unsigned int N) {
	this->_maxN = N;
}
/*copy constructor*/
Span::Span(Span const & input) {

	this->_maxN = input._maxN;
	this->_g1 = input._g1;
}
/*assignment operator*/
Span const & Span::operator=(Span const & input) {

	this->~Span();
	new (this) Span(input);
	return (*this);
}

Span::~Span(void) {

	return ;
}

void	Span::addNumber(int n) {

	if (this->_g1.size() == this->_maxN) {
		throw MaxElementsReachedException();
		return ;
	}
	else 
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
	int min_diff = INT_MAX; // initialize the minimum difference to maximum integer value
	
    // iterate over the elements of the vector and calculate the difference between adjacent elements
    for (size_t i = 0; i < this->_g1.size(); i++) {
        int diff = std::abs(this->_g1[i] - this->_g1[i+1]);
		//std::cout << _g1[i] << " ";
        if (diff < min_diff) { // if the difference is smaller than the current minimum, update the values
            min_diff = diff;
        }
    }

	return min_diff;
}
