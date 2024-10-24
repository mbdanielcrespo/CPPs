/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:00:38 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/23 14:37:58 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>
#include <deque>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack<T>& cp);
		MutantStack&operator=(const MutantStack<T>& cp);
		~MutantStack();

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
	
		iterator 				begin();
		iterator				end();
		const_iterator 			begin() const;
		const_iterator 			end() const;
		
		reverse_iterator 		rbeginIter();
		reverse_iterator 		rendIter();
		const_reverse_iterator 	rbeginIter() const;
		const_reverse_iterator 	rendIter() const;
};

#include <MutantStack.tpp>
