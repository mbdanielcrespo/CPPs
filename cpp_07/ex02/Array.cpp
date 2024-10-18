/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 19:48:28 by marvin            #+#    #+#             */
/*   Updated: 2024/10/18 19:48:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Array.hpp>
#include <main.h>

template <typename T>
Array<T>::Array() : _elements(NULL), _size(0)
{
    std::cout << GREEN << "Default constructor called!" << RESET << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : _elements(new T[n]()), _size(n)
{
    std::cout << GREEN << "Parameter constructor called!" << RESET << std::endl;
}

template <typename T>
Array<T>::Array(const Array& cp) : _elements(new T[cp._size]), _size(cp._size)
{
    std::cout << GREEN << "Copy constructor called!" << RESET << std::endl;
    for (unsigned int i = 0; i < _size; i++)
        _elements[i] = cp._elements[i];
}

template <typename T>
Array<T>&Array<T>::operator=(const Array<T>& cp)
{
    std::cout << GREEN << "Copy assignment operator called!" << RESET << std::endl;
    if (this != &cp)
    {
        delete[] this->_elements;
        this->_size = cp._size;
        this->_elements = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            _elements[i] = cp._elements[i];
    }
}

template <typename T>
Array<T>::~Array()
{
    std::cout << RED << "Destructor called!" << RESET << std::endl;
    delete[] _elements;
}

template <typename T>
Array<T>::T& operator[](unsigned int index);
template <typename T>
Array<T>::const T& operator[](unsigned int index) const;
template <typename T>
Array<T>::unsigned int size() const;