/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:58:09 by danalmei          #+#    #+#             */
/*   Updated: 2024/11/20 11:54:56 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PmergeMe.hpp>
#include <main.h>
#include <sys/time.h>

double	getTime(void)
{
    struct timeval time;

    gettimeofday(&time, NULL);
    return ((double)time.tv_sec * 1000 + (double)time.tv_usec / 1000);
}

int main(int argc, char** argv)
{
	if (argc < 2)
	{
		std::cout << "Usage: " << argv[0] << " <positive ints> " << std::endl;
		return EXIT_FAILIURE;
	}

	try
	{
		PmergeMe pm;
		double startTime, endTime, listTime, dequeTime;

		pm.store_values(argv);
		pm.checkDuplicates();
		
		PRINT_COLOR(YELLOW, "Before: ");
		const List& list = pm.getList();
		for (List::const_iterator it = list.begin(); it != list.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;
		
		startTime = getTime();
		pm.sortList();
		endTime = getTime();
		listTime = endTime - startTime;

		startTime = getTime();
		pm.sortDeque();
		endTime = getTime();
		dequeTime = endTime - startTime;

		PRINT_COLOR(YELLOW, "After: ");
		const List& list_sorted = pm.getList();
		for (List::const_iterator it = list_sorted.begin(); it != list_sorted.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;

		PRINT_COLOR(GREEN, "Time to process a range of " << argc - 1 << " elements with std::list : " << listTime << " ms");
		PRINT_COLOR(GREEN, "Time to process a range of " << argc - 1 << " elements with std::deque : " << dequeTime << " ms");
	}
	catch(const std::exception& e)
	{
		PRINT_ERROR(RED, e.what());
		return EXIT_FAILIURE;
	}
	
	return EXIT_SUCCESS;
}