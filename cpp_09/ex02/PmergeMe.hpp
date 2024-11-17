/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:28:41 by marvin            #+#    #+#             */
/*   Updated: 2024/11/15 18:28:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <main.h>

#include <list>
#include <deque>

#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>

#include <algorithm>
#include <stdexcept>

typedef	std::list<int>		List;
typedef	std::deque<int>		Deque;
typedef std::pair<int, int> IntPair;
typedef std::deque<IntPair>	PairDeque;
typedef std::list<IntPair>	PairList;

class PmergeMe
{
	private:
		List _numbers_list;
		Deque _numbers_deque;

		PairDeque makePairs(Deque& deq);
		void insertSort(Deque& chain, Deque& pending);
		void mergePairs(PairDeque& pairs);
	
		void validateNumber(const std::string& str) const;
		void checkDuplicates() const;

	public:
		PmergeMe();
		PmergeMe(const PmergeMe& cp);
		PmergeMe&operator=(const PmergeMe& cp);
		~PmergeMe();

		void	store_values(char **argv);
		void	ford_jhonson();
		
		const List& getList() const { return _numbers_list; }
		const Deque& getDeque() const { return _numbers_deque; }
};
