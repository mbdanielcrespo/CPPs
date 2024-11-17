/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 22:26:43 by marvin            #+#    #+#             */
/*   Updated: 2024/11/17 22:26:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PmergeMe.hpp>

PmergeMe::PmergeMe()
{
	if (DEBUG == DEBUG_ON)
		PRINT_COLOR(GREEN, COPY_CONSTRUCTOR);
}

PmergeMe::PmergeMe(const PmergeMe& cp) : _numbersList(cp._numbersList), _numbersDeque(cp._numbersDeque)
{
	if (DEBUG == DEBUG_ON)
		PRINT_COLOR(GREEN, COPY_CONSTRUCTOR);
}

PmergeMe&   PmergeMe::operator=(const PmergeMe& cp)
{
	if (DEBUG == DEBUG_ON)
		PRINT_COLOR(GREEN, ASSIGNMENT_OPERATOR);
	
	if (this != &cp)
	{
		_numbersList = cp._numbersList;
		_numbersDeque = cp._numbersDeque;
	}
	return (this*);
}

PmergeMe::~PmergeMe()
{
	if (DEBUG == DEBUG_ON)
		PRINT_COLOR(GREEN, DEFAULT_DESTRUCTOR);
}

PmergeMe::store_values(char **argv)
{
	for (int i = 1; argv[i]; i++)
	{
		validateNumber(argv[i]);

		int value = atoi(argv[i]);
		_numbersList.push_back(value);
		_numbersDeque.push_back(value);
	}
}

void PmergeMe::validateNumber(const std::string& str) const
{
	if (str.empty())
		throw std::invalid_argument("Empty argument");
	
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			throw std::invalid_argument("Invalid character in number: " + str);
	}
	
	long num = std::atol(str.c_str());
	if (num > INT_MAX)
		throw std::invalid_argument("Number too large: " + str);
	if (num < 0)
		throw std::invalid_argument("Negative number not allowed: " + str);
}

void PmergeMe::checkDuplicates() const
{
	std::list<int> sorted = _numbers_list;
	sorted.sort();
	
	std::list<int>::iterator it = sorted.begin();
	std::list<int>::iterator next = it;
	++next;
	
	while (next != sorted.end())
	{
		if (*it == *next)
			throw std::invalid_argument("Duplicate number found: " + std::to_string(*it));
		++it;
		++next;
	}
}

void PmergeMe::mergeInsertSort(Deque& sequence)
{
	if (sequence.size() <= 1)
		return;
	
	int last = -1;
	if (sequence.size() % 2)
	{
		last = sequence.back();
		sequence.pop_back();
	}

	PairDeque pairs;
	for (size_t i = 0; i < sequence.size(); i += 2)
	{
		int a = sequence[i];
		int b = sequence[i + 1];
		if ( a > b)
			pairs.push_back(IntPair(a, b));
		else
			pairs.push_back(IntPair(b, a));
	}

	Deque largerNumbers;
	Deque smallerNumbers;
	for (size_t i = 0; i < pairs.size(); i++)
	{
		largerNumbers.push_back(pairs[i].first);
		smallerNumbers.push_back(pairs[i].second);
	}

	mergeInsertSort(largerNumbers);

	sequence.clear();
	sequence = largerNumbers;
	
	for (size_t i = 0; i < smallerNumbers.size(); ++i)
	{
		Deque::iterator pos = std::lower_bound(sequence.begin(), sequence.end(), smallerNumbers[i]);
		sequence.insert(pos, smallerNumbers[i]);
	}

	if (last != -1) {
		Deque::iterator pos = std::lower_bound(sequence.begin(), sequence.end(), last);
		sequence.insert(pos, last);
	}
}

void PmergeMe::mergeInsertSort(List& sequence)
{
}

void PmergeMe::ford_johnson() {
	mergeInsertSort(_numbers_deque);
	mergeInsertSort(_numbers_list);
}
