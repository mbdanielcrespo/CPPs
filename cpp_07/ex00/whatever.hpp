/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:03:31 by marvin            #+#    #+#             */
/*   Updated: 2024/10/18 15:03:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
T add(T a, T b)
{
	return (a + b);
}

template <typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T max(T a, T b)
{
	if (a > b)
		return a;
	return b;
}

template <typename T>
T min(T a, T b)
{
	if (a < b)
		return a;
	return b;
}
