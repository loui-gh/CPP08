#include "Span.hpp"

int	main() {

	Span tool(14);
	Span empty(12);
	tool.addNumber(112);
	tool.addNumber(21);
	tool.addNumber(12);
	tool.addNumber(15);

	try {
		std::cout << "shortest span TOOL = " << tool.shortestSpan() << std::endl;
		std::cout << "longest span TOOL = " << tool.longestSpan() << std::endl;
		std::cout << "shortest span EMPTY = " << empty.shortestSpan() << std::endl;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	Span too_much(2);
	try {
		for (size_t i = 0; i < 100; i++)
			too_much.addNumber(i);
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}