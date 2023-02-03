#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <vector>
#include <iostream>

template <typename T>
int	easyfind(T &a, int b) {

	int found = 0;
	for (size_t i = 0; i < a.size(); i++) {
		if (b == a[i]){
			std::cout << "BInGO!\n";
			found = 1;
		}
	}

	if (!found) {
		std::cout << "number not found :(\n";
		return -1;
	}
	return 0;
}

#endif