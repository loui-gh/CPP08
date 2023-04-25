/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Loui :) <loflavel@students.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:39:36 by Loui :)           #+#    #+#             */
/*   Updated: 2023/02/07 12:39:39 by Loui :)          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//Test your Span at least with a minimum of 10 000 numbers. More would be even better.
int main() {
	
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span addy(20);

	for (size_t i = 0; i < 22; i++) {
		try {
			addy.addNumber(i); 
		}  catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}


	Span tool(14);
	//Span empty(12);
	tool.addNumber(112);
	tool.addNumber(21);
	tool.addNumber(12);
	tool.addNumber(15);

	/*copy constructor*/
	Span test(tool);
	/*assignment operator*/
	try {
		std::cout << "shortest span TOOL = " << tool.shortestSpan() << std::endl;
		//std::cout << "shortest span  TEST COPY = " << test.shortestSpan() << std::endl;

		std::cout << "longest span TOOL = " << tool.longestSpan() << std::endl;
		//std::cout << "longest span TEST COPY = " << test.longestSpan() << std::endl;

		//std::cout << "shortest span EMPTY = " << empty.shortestSpan() << std::endl;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	Span too_much(2);
	try {
		for (size_t i = 0; i < 2; i++)
			too_much.addNumber(i);
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	//10,000 numbers is a party!
	std::cout << "\nBig Bohemoth\n";
	Span bigBoy(10000);
    std::srand(static_cast<unsigned>(std::time(0)));

    for (int i = 0; i < 10000; ++i) {
       try{
			bigBoy.addNumber(std::rand());
	   	} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
    }

	return 0;
}

