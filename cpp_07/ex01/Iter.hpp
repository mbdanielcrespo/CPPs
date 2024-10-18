/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:23:40 by marvin            #+#    #+#             */
/*   Updated: 2024/10/18 15:23:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

template <typename T, typename Func>
void    iter(T *arr, int len, Func func)
{
	for (int i = 0; i < len; i++)
		func(arr[i]);
}

template <typename T>
void printEle(T& ele)
{
    std::cout << ele << " ";
}

template <typename T>
void incrementEle(T& ele)
{
    ++ele;
}
