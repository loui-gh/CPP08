#include "easyfind.hpp"

int	main() {

	std::vector<int> numbers;

	numbers.push_back(2);
	numbers.push_back(4);
	numbers.push_back(6);
	numbers.push_back(8);

	easyfind(numbers, 2);
	easyfind(numbers, 12);



	return 0;
}