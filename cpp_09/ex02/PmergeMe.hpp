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
#include <climits>

typedef	std::list<int>		List;
typedef	std::deque<int>		Deque;
typedef std::pair<int, int> IntPair;
typedef std::list<IntPair>	PairList;
typedef std::deque<IntPair>	PairDeque;

class PmergeMe
{
	private:
		List _numbersList;
		Deque _numbersDeque;

		void validateNumber(const std::string& str) const;
		
		void mergeInsertSort(List& sequence);
		void mergeInsertSort(Deque& sequence);

	public:
		PmergeMe();
		PmergeMe(const PmergeMe& cp);
		PmergeMe&operator=(const PmergeMe& cp);
		~PmergeMe();

		void	store_values(char **argv);
		void	checkDuplicates() const;

		void sortList();
		void sortDeque();
		const List& getList() const;
		const Deque& getDeque() const;
};
