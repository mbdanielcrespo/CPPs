/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:25:37 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:25:39 by danalmei         ###   ########.fr       */
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
	std::cout << GREEN  << "Int constructor called" << RESET << std::endl;
	num = n << bit_fraction;
}

Fixed::Fixed(const float f)
{
	std::cout << GREEN << "FLoat constructor called" << RESET  << std::endl;
	num = roundf(f * (1 << bit_fraction));	
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



Fixed&	Fixed::operator=(const Fixed &fixed)
{
	std::cout << GREEN << "Copy assignment operator called" << RESET << std::endl;
	num = fixed.num;
	return (*this);
}

Fixed&	Fixed::operator++()
{
	std::cout << GREEN << "Overload x++ called" << RESET << std::endl;
	this->num++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	std::cout << GREEN << "Overload ++x called" << RESET << std::endl;
	Fixed tmp = *this;
	++*this;
	return (tmp);
}

Fixed&	Fixed::operator--()
{
	std::cout << GREEN << "Overload x-- called" << RESET << std::endl;
	this->num--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	std::cout << GREEN << "Overload --x called" << RESET << std::endl;
	Fixed tmp = *this;
	--*this;
	return (tmp);
}



bool	Fixed::operator>(const Fixed &fixed)
{
	std::cout << GREEN << "Overload > called" << RESET << std::endl;
	return (this->num > fixed.num);
}

bool	Fixed::operator>=(const Fixed &fixed)
{
	std::cout << GREEN << "Overload >= called" << RESET << std::endl;
	return (this->num >= fixed.num);
}

bool	Fixed::operator<(const Fixed &fixed)
{
	std::cout << GREEN << "Overload < called" << RESET << std::endl;
	return (this->num < fixed.num);
}

bool	Fixed::operator<=(const Fixed &fixed)
{
	std::cout << GREEN << "Overload <= called" << RESET << std::endl;
	return (this->num <= fixed.num);
}

bool	Fixed::operator==(const Fixed &fixed)
{
	std::cout << GREEN << "Overload == called" << RESET << std::endl;
	return (this->num == fixed.num);
}

bool	Fixed::operator!=(const Fixed &fixed)
{
	std::cout << GREEN << "Overload != called" << RESET << std::endl;
	return (this->num != fixed.num);
}


Fixed	Fixed::operator+(const Fixed &fixed)
{
	Fixed	tmp = this->num + fixed.num;
	return (tmp); 
}

Fixed	Fixed::operator-(const Fixed &fixed)
{
	Fixed	tmp = this->num - fixed.num;
	return (tmp); 
}

Fixed	Fixed::operator*(const Fixed &fixed)
{
	Fixed	tmp = this->toFloat() * fixed.toFloat();		
	return (tmp);
}

Fixed	Fixed::operator/(const Fixed &fixed)
{
	Fixed	tmp = this->toFloat() / fixed.toFloat();		
	return (tmp);
}




float	Fixed::toFloat(void) const
{
	return (float(this->num) / (float)(1 << this->bit_fraction));
}

std::ostream&operator<<(std::ostream &os, const Fixed &obj)
{
	return (os << obj.toFloat());
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



Fixed&	Fixed::min(Fixed &fix1, Fixed &fix2)
{
	if (fix1.num <= fix2.num)
		return (fix1);
	return (fix2);
}

const Fixed&	Fixed::min(const Fixed &fix1, const Fixed &fix2)
{
	if (fix1.num <= fix2.num)
		return (fix1);
	return (fix2);
}

Fixed&		Fixed::max(Fixed &fix1, Fixed &fix2)
{
	if (fix1.num >= fix2.num)
		return (fix1);
	return (fix2);
}

const Fixed&	Fixed::max(const Fixed &fix1, const Fixed &fix2)
{
	if (fix1.num >= fix2.num)
		return (fix1);
	return (fix2);
}
