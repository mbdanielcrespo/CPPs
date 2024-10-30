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
Array<T>::Array() : _eles(NULL), _size(0)
{
    std::cout << GREEN << "Default constructor called!" << RESET << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : _eles(new T[n]()), _size(n)
{
    std::cout << GREEN << "Parameter constructor called!" << RESET << std::endl;
}

template <typename T>
Array<T>::Array(const Array& cp) : _eles(new T[cp._size]), _size(cp._size)
{
    std::cout << GREEN << "Copy constructor called!" << RESET << std::endl;
    for (unsigned int i = 0; i < _size; i++)
        _eles[i] = cp._eles[i];
}

template <typename T>
Array<T>&Array<T>::operator=(const Array<T>& cp)
{
    std::cout << GREEN << "Copy assignment operator called!" << RESET << std::endl;
    if (this != &cp)
    {
        delete[] this->_eles;
        this->_size = cp._size;
        this->_eles = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            _eles[i] = cp._eles[i];
    }
}

template <typename T>
Array<T>::~Array()
{
    std::cout << RED << "Destructor called!" << RESET << std::endl;
    delete[] _eles;
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
        throw std::out_of_range("Index out of bounds");
    return _eles[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
    if (index >= _size)
        throw std::out_of_range("Index out of bounds");
    return _eles[index];
}

template <typename T>
unsigned int  Array<T>::size() const
{
    return _size;
}
