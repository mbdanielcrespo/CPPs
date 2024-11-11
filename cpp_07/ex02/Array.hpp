/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 19:42:43 by marvin            #+#    #+#             */
/*   Updated: 2024/10/18 19:42:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
	private:
		T* _eles;
		unsigned int _size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& cp);
		Array&operator=(const Array& cp);
		~Array();

		T& operator[](unsigned int index);
		const T& operator[](unsigned int index) const;
		unsigned int size() const;
};

#include <Array.tpp>