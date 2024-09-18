/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:29:15 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:29:15 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>
#include <cmath>
#include <main.h>
#define EPSILON 1e-9

Point::Point() : x(0), y(0)
{
	std::cout << RED << "Default constructor called!" << RESET << std::endl;
}

Point::Point(const float x, const float y) : x(x), y(y)
{
	std::cout << GREEN << "Parameter contructor called!" << RESET << std::endl;
}
Point::Point(const Point &point) : x(point.x), y(point.y)
{
	std::cout << GREEN << "Copy constructor called!" << RESET << std::endl;
}

Point&	Point::operator=(const Point &point)
{
	std::cout << GREEN << "Copy assignment operator called" << RESET << std::endl;
	if (this == &point)
        return *this;
	x = point.x;
	y = point.y;
	return (*this);
}

Point::~Point()
{
	std::cout << RED << "Destructor called!" << RESET << std::endl;
}

double Point::area(const Point &a, const Point &b, const Point &c) {
    return std::abs((a.x.toFloat() * (b.y.toFloat() - c.y.toFloat()) +
                     b.x.toFloat() * (c.y.toFloat() - a.y.toFloat()) +
                     c.x.toFloat() * (a.y.toFloat() - b.y.toFloat())) / 2.0f);
}

bool Point::bsp(const Point a, const Point b, const Point c, const Point point)
{
    double areaABC = Point::area(a, b, c);

    double areaPAB = Point::area(point, a, b);
    double areaPBC = Point::area(point, b, c);
    double areaPCA = Point::area(point, c, a);

    return std::abs((areaPAB + areaPBC + areaPCA) - areaABC) < EPSILON;
}
