/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:23:28 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:23:29 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>
#include <main.h>

Fixed::Fixed(void)
{
	std::cout << GREEN << "Default constructor called" << RESET << std::endl;
	num = 0;
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

int Fixed::getRawBits(void) const
{
	return(this->num);
}

void Fixed::setRawBits(int const raw)
{
	this->num = raw;
}
