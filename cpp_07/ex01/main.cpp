/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:05:30 by danalmei          #+#    #+#             */
/*   Updated: 2024/11/04 10:32:26 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Iter.hpp>
#include <main.h>

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int len = sizeof(arr) / sizeof(arr[0]);

	std::cout << "Original array: ";
	iter(arr, len, printEle<int>);
	std::cout << std::endl;

	iter(arr, len, incrementEle<int>);

	std::cout << "After incrementing: ";
	iter(arr, len, printEle<int>);
	std::cout << std::endl;

	std::string strArr[] = {"a", "b", "c", "d", "e", "f", "g"};
    int strLength = sizeof(strArr) / sizeof(strArr[0]);

    std::cout << "String array: ";
    iter(strArr, strLength, printEle<std::string>);
    std::cout << std::endl;

	return 0;
}
