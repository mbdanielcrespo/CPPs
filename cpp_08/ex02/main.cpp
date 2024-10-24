/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:58:09 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/23 16:22:51 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MutantStack.hpp>
#include <main.h>
#include <list>

int main()
{
	
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << std::endl;

	std::list<int> lstack;

	lstack.push_back(5);
	lstack.push_back(17);
	std::cout << lstack.back() << std::endl;
	lstack.pop_back();
	std::cout << lstack.size() << std::endl;
	lstack.push_back(3);
	lstack.push_back(5);
	lstack.push_back(737);
	lstack.push_back(0);
	
	std::list<int>::iterator lit = lstack.begin();
	std::list<int>::iterator lite = lstack.end();
	
	++lit;
	--lit;
	
	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}
	std::list<int> p(lstack);
	return 0;
}