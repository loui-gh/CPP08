/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Loui :) <loflavel@students.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:39:53 by Loui :)           #+#    #+#             */
/*   Updated: 2023/02/08 16:00:02 by Loui :)          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int>	mstack;
	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();


	++it;
	--it;
	while (it != ite)
	{
		std::cout << "OG mstack: " << *it << std::endl;
		++it;
	}
	//std::stack<int> s(mstack);

	/*Copy constructor*/
	MutantStack<int> copy_mstack(mstack);
	MutantStack<int>::iterator c_it = mstack.begin();
	MutantStack<int>::iterator c_ite = mstack.end();
	++c_it;
	--c_it;
	while (c_it != c_ite)
	{
		std::cout << "copy_mstack: " << *it << std::endl;
		++c_it;
	}
	
	/*std::list*/
	std::list<std::string> mlist;
	mlist.push_front("Louisa");
	mlist.push_front("is");
	mlist.push_front("the");
	mlist.push_front("best! :)");
	std::list<std::string>::reverse_iterator it_r = mlist.rbegin();
	std::list<std::string>::reverse_iterator ite_r = mlist.rend();

	++it_r;
	--it_r;

	std::cout << "\nand now in reverse with a list!\n\n";
	while (it_r != ite_r)
	{
		std::cout << *it_r << std::endl;
		++it_r;
	}

	return 0;
}