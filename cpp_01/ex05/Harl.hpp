/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:21:08 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:21:10 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <main.h>

class Harl
{
	private:
	public:
		Harl(void);
		~Harl();
	
		static void	debug(void);
		static void	info(void);
		static void	warning(void);
		static void	error(void);
		void	(*funcs[4])(void);

		void	complain(std::string level);
};

