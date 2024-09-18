/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:29:22 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:29:22 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <Fixed.hpp>

class Point
{
	private:
		Fixed	x;
		Fixed	y;
		
	public:
		Point();
		Point(const float x, const float y);		
		Point(const Point &point);
		~Point();
		Point&	operator=(const Point &point);

		static double	area(const Point &a, const Point &b, const Point &c);
		static bool	bsp(const Point a, const Point b, const Point c, const Point point);
};

