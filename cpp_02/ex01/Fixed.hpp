/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:24:53 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/11 17:43:36 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Fixed
{
	private:
		int 				num;
		static const int	bit_fraction = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &fixed);
		Fixed(const int n);
		Fixed(const float f);
		~Fixed();

		Fixed&operator=(const Fixed &fixed);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream& operator<<(std::ostream &os, const Fixed &obj);
