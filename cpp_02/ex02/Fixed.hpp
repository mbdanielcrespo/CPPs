/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:25:48 by danalmei          #+#    #+#             */
/*   Updated: 2024/10/11 17:44:35 by danalmei         ###   ########.fr       */
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

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed&		min(Fixed &fix1, Fixed &fix2);
		static const Fixed&	min(const Fixed &fix1, const Fixed &fix2);
		static Fixed&		max(Fixed &fix1, Fixed &fix2);
		static const Fixed&	max(const Fixed &fix1, const Fixed &fix2);

		Fixed&	operator=(const Fixed &fixed);

		Fixed	operator+(const Fixed &fixed);
		Fixed	operator-(const Fixed &fixed);
		Fixed	operator/(const Fixed &fixed);
		Fixed	operator*(const Fixed &fixed);

		Fixed	operator++(int);
		Fixed&	operator++();
		Fixed	operator--(int);
		Fixed&	operator--();

		bool	operator<(const Fixed &fixed);
		bool	operator>(const Fixed &fixed);
		bool	operator<=(const Fixed &fixed);
		bool	operator>=(const Fixed &fixed);
		bool	operator==(const Fixed &fixed);
		bool	operator!=(const Fixed &fixed);
};

std::ostream& operator<<(std::ostream &os, const Fixed &obj);