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
	return (*this);
}

PmergeMe::~PmergeMe()
{
	if (DEBUG == DEBUG_ON)
		PRINT_COLOR(GREEN, DEFAULT_DESTRUCTOR);
}

void	PmergeMe::store_values(char **argv)
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
		throw std::invalid_argument("Error: Empty argument");
	
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			throw std::invalid_argument("Error: Invalid character in number: " + str);
	}
	
	long num = std::atol(str.c_str());
	if (num > INT_MAX)
		throw std::invalid_argument("Error: Number too large: " + str);
	if (num < 0)
		throw std::invalid_argument("Error: Negative number not allowed: " + str);
}

void PmergeMe::checkDuplicates() const
{
	std::list<int> sorted = _numbersList;
	sorted.sort();
	
	std::list<int>::iterator it = sorted.begin();
	std::list<int>::iterator next = it;
	++next;
	
	while (next != sorted.end())
	{
		if (*it == *next)
		{
			std::ostringstream oss;
			oss << "Error: Duplicate number found: " << *it;
			throw std::invalid_argument(oss.str());
		}
		++it;
		++next;
	}
}

template <typename Container>
Container generateJacobsthalSequence(int n)
{
    Container sequence;
    if (n <= 0)
        return sequence;

    sequence.push_back(0); // Jacobsthal(0)
    if (n == 1)
        return sequence;

    sequence.push_back(1); // Jacobsthal(1)

    int prev1 = 1; // Jacobsthal(1)
    int prev2 = 0; // Jacobsthal(0)

    for (int i = 2; i < n; ++i)
    {
        int next = prev1 + 2 * prev2;
        if (next >= n) // Ensure index does not exceed `n`
            break;
        sequence.push_back(next);
        prev2 = prev1;
        prev1 = next;
    }
    return sequence;
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
	if (DEBUG == DEBUG_ON)
		PRINT_COLOR(CYAN, "Creating pairs ...");
	for (size_t i = 0; i < sequence.size(); i += 2)
	{
		int a = sequence[i];
		int b = sequence[i + 1];
		if ( a > b)
		{
			pairs.push_back(IntPair(a, b));
			if (DEBUG == DEBUG_ON)
				std::cout << "[" << a << "," << b << "] ";
		}
		else
		{
			pairs.push_back(IntPair(b, a));
			if (DEBUG == DEBUG_ON)
				std::cout << "[" << b << "," << a << "] ";
		}
	}

	Deque largerNumbers;
	Deque smallerNumbers;
	for (size_t i = 0; i < pairs.size(); i++)
	{
		largerNumbers.push_back(pairs[i].first);
		smallerNumbers.push_back(pairs[i].second);
	}

	if (DEBUG == DEBUG_ON)
	{
		PRINT_COLOR(CYAN, "\nSeparating pairs into: ");
		PRINT_COLOR(CYAN, "\nLarger numbers: ");
		for (size_t i = 0; i < largerNumbers.size(); i++)
			std::cout << largerNumbers[i] << " ";
		std::cout << std::endl;
		PRINT_COLOR(CYAN, "\nSmaller numbers: ");
		for (size_t i = 0; i < smallerNumbers.size(); i++)
			std::cout << smallerNumbers[i] << " ";
		std::cout << std::endl;
	}

	if (DEBUG == DEBUG_ON)
		PRINT_COLOR(CYAN, "Recursivity ...");
	mergeInsertSort(largerNumbers);

	sequence.clear();
	sequence = largerNumbers;
	
	if (DEBUG == DEBUG_ON)
		PRINT_COLOR(CYAN, "Inserting smaller numbers: ");
		
	Deque jacobsthalIndices = generateJacobsthalSequence<Deque>(smallerNumbers.size());
	if (DEBUG == DEBUG_ON)
	{
		PRINT_COLOR(CYAN, "Jacobsthal Sequence: ");
		for (Deque::iterator it = jacobsthalIndices.begin(); it != jacobsthalIndices.end(); ++it)
			std::cout << *it << " ";
		std::cout << std::endl;
	}

	Deque::iterator jacobIt = jacobsthalIndices.begin();
	for (size_t i = 0; i < smallerNumbers.size(); ++i)
	{
		int index = (jacobIt != jacobsthalIndices.end()) ? *jacobIt++ : i;
		int value = smallerNumbers[index];

		Deque::iterator pos = std::lower_bound(sequence.begin(), sequence.end(), value);
		sequence.insert(pos, value);

		if (DEBUG == DEBUG_ON)
		{
			PRINT_COLOR(CYAN, "Current sequence: ");
			for (size_t j = 0; j < sequence.size(); j++)
				std::cout << sequence[j] << " ";
			std::cout << std::endl;
		}
	}

	if (last != -1)
	{
		Deque::iterator pos = std::lower_bound(sequence.begin(), sequence.end(), last);
		sequence.insert(pos, last);
	}
}

void PmergeMe::mergeInsertSort(List& sequence)
{
	if (sequence.size() <= 1)
		return;
	
	int last = -1;
	if (sequence.size() % 2)
	{
		last = sequence.back();
		sequence.pop_back();
	}

	PairList pairs;
	List::iterator it = sequence.begin();
	while (it != sequence.end())
	{
		int first = *it++;
		if (it == sequence.end())
			break;
		int second = *it++;

		if (first > second)
			pairs.push_back(IntPair(first, second));
		else
			pairs.push_back(IntPair(second, first));
	}
	

	List largerNumbers;
	List smallerNumbers;
	PairList::iterator pairIt;
	for (pairIt = pairs.begin(); pairIt != pairs.end(); pairIt++)
	{
		largerNumbers.push_back(pairIt->first);
		smallerNumbers.push_back(pairIt->second);
	}

	mergeInsertSort(largerNumbers);

	sequence.clear();
	sequence = largerNumbers;
	
	List jacobsthalIndices = generateJacobsthalSequence<List>(smallerNumbers.size());
	List::iterator jacobIt = jacobsthalIndices.begin();

	for (size_t i = 0; i < smallerNumbers.size(); ++i)
	{
		int index;
		if (jacobIt != jacobsthalIndices.end())
			index = *jacobIt++;
		else
			index = i;
		List::iterator targetIt = smallerNumbers.begin();
		std::advance(targetIt, index);

		if (targetIt == smallerNumbers.end())
			break;

		List::iterator pos = std::lower_bound(sequence.begin(), sequence.end(), *targetIt);
		sequence.insert(pos, *targetIt);
	}

	if (last != -1)
	{
		List::iterator pos = std::lower_bound(sequence.begin(), sequence.end(), last);
		sequence.insert(pos, last);
	}
}

void	PmergeMe::sortList() { mergeInsertSort(_numbersList); }
void	PmergeMe::sortDeque() { mergeInsertSort(_numbersDeque); }
const List&		PmergeMe::getList() const { return _numbersList; }
const Deque&	PmergeMe::getDeque() const { return _numbersDeque; }
