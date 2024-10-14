/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:10:03 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/14 13:10:03 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <main.h>

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain();
		Brain(Brain& cp);
		Brain&operator=(const Brain& cp);
		virtual ~Brain();

		void setIdea(int index, const std::string& idea);
    	std::string getIdea(int index) const;
};

