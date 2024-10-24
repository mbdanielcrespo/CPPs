/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:04:45 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/23 14:42:50 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MutantStack.hpp>
#include <main.h>

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
	std::cout << GREEN << "MutantStack Default constructor called!" << RESET << std::endl;
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& cp) : std::stack<T>(cp)
{
	std::cout << GREEN << "MutantStack Copy constructor called!" << RESET << std::endl;
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& cp)
{
	std::cout << GREEN << "MutantStack Assignment operator called!" << RESET << std::endl;
	if (this != &cp)
		std::stack<T>::operator=(cp);
	return *this;
}

template<typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << RED << "MutantStack Default destructor called!" << RESET << std::endl;
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return std::stack<T>::c.begin();
}
template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return std::stack<T>::c.end();
}
template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
	return std::stack<T>::c.begin();
}
template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
	return std::stack<T>::c.end();
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbeginIter()
{
	return std::stack<T>::c.rbegin();
}
template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rendIter()
{
	return std::stack<T>::c.rend();
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbeginIter() const
{
	return std::stack<T>::c.rbegin();
}
template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rendIter() const
{
	return std::stack<T>::c.rend();
}