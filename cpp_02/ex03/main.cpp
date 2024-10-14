/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:27:18 by danalmei          #+#    #+#             */
/*   Updated: 2024/09/18 14:27:18 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

int main() {
	Point A(0, 0);
	Point B(5, 0);
	Point C(0, 5);

	Point P1(2, 2);
	Point P2(4, 4);

	if (Point::bsp(A, B, C, P1))
		std::cout << "Point P1 is inside the triangle.\n";
	else
		std::cout << "Point P1 is outside the triangle.\n";
	
	if (Point::bsp(A, B, C, P2))
		std::cout << "Point P2 is inside the triangle.\n";
	else
		std::cout << "Point P2 is outside the triangle.\n";

	return 0;
}