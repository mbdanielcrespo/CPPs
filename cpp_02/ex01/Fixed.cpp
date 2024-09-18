/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:24:41 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:24:43 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>
#include <main.h>
#include <cmath>

Fixed::Fixed(void)
{
	std::cout << GREEN << "Default constructor called" << RESET << std::endl;
	num = 0;
}

Fixed::Fixed(const int n)
{
	num = n << bit_fraction;
}

Fixed::Fixed(const float f)
{
	num = roundf(f * (1 << this->bit_fraction));	
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << GREEN << "Copy constructor called" << RESET << std::endl;
	*this = fixed;
}

Fixed::~Fixed(void)
{
	std::cout << RED << "Default destructor called" << RESET << std::endl;
}

Fixed&Fixed::operator=(const Fixed &fixed)
{
	std::cout << GREEN << "Copy assignment operator called" << RESET << std::endl;
	num = fixed.num;
	return (*this);
}

std::ostream&operator<<(std::ostream &os, const Fixed &obj)
{
	return (os << obj.toFloat());
}

float	Fixed::toFloat(void) const
{
	return (float(this->num) / (float)(1 << this->bit_fraction));
}

int		Fixed::toInt(void) const
{
	return (this->num >> this->bit_fraction);
}

int Fixed::getRawBits(void) const
{
	return(this->num);
}

void Fixed::setRawBits(int const raw)
{
	this->num = raw;
}
