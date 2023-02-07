/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Loui :) <loflavel@students.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:39:33 by Loui :)           #+#    #+#             */
/*   Updated: 2023/02/07 12:39:35 by Loui :)          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main() {

	std::vector<int> numbers;

	numbers.push_back(2);
	numbers.push_back(4);
	numbers.push_back(6);
	numbers.push_back(8);

	try {
		int find = *(easyfind(numbers, 2));
		std::cout << find << " found.\n";
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		int find = *(easyfind(numbers, 12));
		std::cout << find << " found.\n";
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}



	return 0;
}